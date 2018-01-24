/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 08:14:53 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/18 16:45:52 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_list(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	while (list)
	{
		ft_putnbr(list->x[0]);
		ft_putnbr(list->x[1]);
		ft_putnbr(list->x[2]);
		ft_putnbr(list->x[3]);
		ft_putnbr(list->y[0]);
		ft_putnbr(list->y[1]);
		ft_putnbr(list->y[2]);
		ft_putnbr(list->y[3]);
		ft_putchar(list->name);
		ft_putchar('\n');
		list = list->next;
	}
}
