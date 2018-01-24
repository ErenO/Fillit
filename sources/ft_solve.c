/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 20:16:40 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/30 11:44:20 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_solve(t_list *begin_list, char *str)
{
	t_list		*new;
	int			size_map;
	int			nb;
	char		**tab;

	nb = 2;
	new = begin_list;
	size_map = 1;
	while ((size_map * size_map) < (ft_strlen(str) / 4))
		size_map++;
	while (1)
	{
		tab = ft_alloc_mem(size_map, size_map);
		if (is_clean(tab, begin_list, 0, size_map))
			break ;
		size_map += 1;
	}
	ft_print_grid(tab, size_map);
}
