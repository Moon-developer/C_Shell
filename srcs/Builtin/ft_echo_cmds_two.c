/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo_cmds_two.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 23:29:00 by mafernan          #+#    #+#             */
/*   Updated: 2017/09/30 23:29:33 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"

/*
 ** exe echo cmds
*/

void	ft_echo_exe_cmd(char *str, t_all *a)
{
	char	*temp;

	temp = ft_strjoin(str, " | xargs");
	ft_line(temp, a);
	ft_strdel(&temp);
}
