/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globutil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:11:21 by mafernan          #+#    #+#             */
/*   Updated: 2018/07/16 08:04:30 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"

int				ft_isalnumextended(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9') || c == '-')
		return (1);
	return (0);
}

int				rangeisvalid(const char *let)
{
	int k;

	k = 0;
	while (let[k])
	{
		if (ft_isalnumextended(let[k]) == 0)
			return (0);
		k++;
	}
	return (1);
}
