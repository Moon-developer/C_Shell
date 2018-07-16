/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:23:11 by mafernan          #+#    #+#             */
/*   Updated: 2017/09/12 06:41:49 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"

void	ft_echoenv(char *str, t_all *a)
{
	char	**toprint;
	int		i;
	char	**tofind;
	int		len;

	i = 0;
	tofind = (ft_strsplit(str, '$'));
	len = ft_arraylen(a->new);
	while (i != len && tofind[1] != NULL
			&& (ft_strstr(a->new[i], tofind[1]) == NULL))
		i++;
	if (i != len && i != 0)
	{
		toprint = ft_strsplit(a->new[i], '=');
		ft_putendl(toprint[1]);
		ft_delarray(toprint);
	}
	else
		ft_putstr("\n");
	ft_delarray(tofind);
}
