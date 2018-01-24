/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 20:16:20 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/17 20:23:17 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_epur(t_list *begin_list)
{
	t_list	*use_me;

	use_me = begin_list;
	while (use_me)
	{
		use_me->x[1] = use_me->x[1] - use_me->x[0] + 0;
		use_me->x[2] = use_me->x[2] - use_me->x[0] + 0;
		use_me->x[3] = use_me->x[3] - use_me->x[0] + 0;
		use_me->y[1] = use_me->y[1] - use_me->y[0] + 0;
		use_me->y[2] = use_me->y[2] - use_me->y[0] + 0;
		use_me->y[3] = use_me->y[3] - use_me->y[0] + 0;
		use_me = use_me->next;
	}
}
