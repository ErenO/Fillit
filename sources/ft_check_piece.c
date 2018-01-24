/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_piece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 20:27:08 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/18 16:20:51 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_piece(t_list *begin, char **tab, int position, int size_map)
{
	int i;
	int	j;
	int	k;

	j = position % size_map;
	i = position / size_map;
	begin->y[0] = i;
	begin->x[0] = j;
	k = 1;
	while (k <= 4)
	{
		if (i < size_map && j < size_map)
		{
			if (tab[i][j] != '.')
				return (0);
		}
		else
			return (0);
		i = begin->y[k] + begin->y[0];
		j = begin->x[k] + begin->x[0];
		k++;
	}
	return (1);
}
