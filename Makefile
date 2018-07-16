# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/04 08:57:02 by mafernan          #+#    #+#              #
#*   Updated: 2017/09/16 22:19:23 by mafernan         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = 42sh

HDR = libft/libft.h\
	  includes/*.h

SRC1 = srcs/Main/*.c

SRC2 = srcs/Builtin/*.c

SRC3 = srcs/Heredoc/*.c

SRC4 = srcs/Bonus/*.c

SRC5 = srcs/Pipe_Redirects/*.c

SRC6 = srcs/Globbing/*.c

SRC7 = srcs/History/*.c

SRC8 = srcs/Termcap/*.c

SRC = $(SRC1) $(SRC2) $(SRC3) $(SRC4) $(SRC5) $(SRC6) $(SRC7) $(SRC8)

FLAGS = -iquotelibft -iquoteincludes -Wall -Werror -Wextra -g3 -g -pedantic

LIBFT = -L libft/ -lft

OPT = objs/*.o

define p1
tput cuu 1
echo "                                                                         "
tput cuu 1
tput setaf 1
echo $1
tput sgr0
endef

define p2
tput cuu 1
echo "                                                                         "
tput cuu 1
tput setaf 3
echo $1
tput sgr0
endef

define p3
tput cuu 1
echo "                                                                         "
tput cuu 1
tput setaf 2
echo $1
tput sgr0
endef

define colourecho
tput blink
tput setaf 6
@echo $1
tput sgr0
endef

define colourecho1
tput setaf 6
@echo $1
tput sgr0
endef

define colourecho2
tput setaf 87
@echo $1
tput sgr0
endef

define green
tput setaf 2
@echo $1
tput sgr0
endef

define bar
echo $1
tput sgr0
endef

all: objs_dir
	@clear
	@export CLICOLOR='1'
	@export TERM='xterm-256color'
	@$(call colourecho2, "\nCompiling $(NAME):\n")
	@rm -rf *.dSYM
#	@make -C libft/ fclean && make -C libft/
	@gcc -c $(HDR) $(SRC) $(FLAGS)
	@ mv *.o objs/
	@gcc -o $(NAME) $(OPT) $(LIBFT) $(FLAGS) -ltermcap
	@rm -rf "-"
	@$(call colourecho2, "Done Compiling!\n")

clean:
	@/bin/rm -f $(OPT)

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -rf *.gch

re: fclean all

objs_dir:
	@mkdir -p objs

val:
	@valgrind --leak-check=full ./$(NAME) && rm -rf *.dSYM
