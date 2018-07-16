/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addlink.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 11:16:07 by mafernan          #+#    #+#             */
/*   Updated: 2018/07/16 08:01:49 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shell.h"

void	addlink(t_list **head, char *str)
{
	t_list *newnode;
	t_list *temp;

	newnode = (t_list *)malloc(sizeof(t_list));
	newnode->content = str;
	newnode->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = newnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
}
