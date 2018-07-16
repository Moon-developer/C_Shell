/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frontaddlink.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 11:16:54 by mafernan          #+#    #+#             */
/*   Updated: 2018/07/16 08:04:03 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"

t_list		*frontaddlink(t_list *list, char *str)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->content = str;
		tmp->next = list;
	}
	return (tmp);
}
