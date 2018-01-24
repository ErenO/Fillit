/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find_end.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <ssicard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 08:11:32 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/15 17:37:00 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*ft_list_find_end(t_list *list)
{
	if (list->next == NULL)
		return (list);
	return (ft_list_find_end(list->next));
}
