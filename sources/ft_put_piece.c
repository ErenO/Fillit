/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 11:18:54 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/17 20:30:14 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_put_piece(char **tab, t_list *begin, int position, int size_map)
{
	int i;
	int j;
	int k;

	i = position / size_map;
	j = position % size_map;
	tab[i][j] = begin->name;
	k = 1;
	while (k < 4)
	{
		tab[begin->y[k] + i][begin->x[k] + j] = begin->name;
		k++;
	}
}
