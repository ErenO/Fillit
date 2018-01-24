/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 17:21:43 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/18 10:50:32 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_list_push_back(t_list *begin_list, int *position, char fill)
{
	t_list	*new_element;
	t_list	*current;

	current = begin_list;
	new_element = ft_add_link(position, fill);
	while (current->next)
		current = current->next;
	current->next = new_element;
}
