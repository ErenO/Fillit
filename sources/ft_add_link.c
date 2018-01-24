/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_link.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 12:03:14 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/18 14:18:14 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*ft_add_link(int *position, char fill)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	if (tmp)
	{
		tmp->x[0] = position[0];
		tmp->x[1] = position[2];
		tmp->x[2] = position[4];
		tmp->x[3] = position[6];
		tmp->y[0] = position[1];
		tmp->y[1] = position[3];
		tmp->y[2] = position[5];
		tmp->y[3] = position[7];
		tmp->name = fill;
		tmp->next = NULL;
	}
	return (tmp);
}
