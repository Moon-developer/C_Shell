/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_history.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 12:41:51 by mafernan          #+#    #+#             */
/*   Updated: 2017/09/28 13:07:41 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"
#define P ft_putendl(a->history[n]);
#define PRINT ft_putstr("   [");ft_putnbr(i);ft_putstr("] ");P
#define INCR i++;n++

void	ft_list_history(char *str, t_all *a)
{
	int		i;
	int		n;

	(void)str;
	i = 1;
	n = 0;
	a->yes = 1;
	if (a->array[1] != NULL)
	{
		i = ((ft_arraylen(a->history) + 1) - ft_atoi(a->array[1]));
		n = ((ft_arraylen(a->history) - 1) - (ft_atoi(a->array[1]) - 1));
		while (a->history[n] != NULL)
		{
			PRINT;
			INCR;
		}
	}
	else
		while (a->history[n] != NULL)
		{
			PRINT;
			INCR;
		}
}
