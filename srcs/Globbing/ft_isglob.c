/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isglob.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:04:59 by mafernan          #+#    #+#             */
/*   Updated: 2018/07/16 08:04:09 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"

int		isglob(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '*')
			return (1);
		else if (s[i] == '?')
			return (2);
		else if (s[i] == '[')
			return (3);
		else if (s[i] == '{')
			return (4);
		i++;
	}
	return (0);
}
