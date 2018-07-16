/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quesglob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 14:02:03 by mafernan          #+#    #+#             */
/*   Updated: 2018/07/16 08:04:50 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"

int		quesglob(const char *name, char *str)
{
	int i;

	i = 0;
	if (ft_strlen(name) == ft_strlen(str))
	{
		while (name[i] != '\0')
		{
			if (str[i] != '?')
				if (str[i] != name[i])
					return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
