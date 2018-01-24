/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc_mem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 19:55:23 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/18 19:14:23 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_alloc_mem(int x, int y)
{
	char	**grid;
	int		i;

	grid = (char**)malloc(y * sizeof(char*) + 4);
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i <= y)
	{
		grid[i] = (char*)malloc(x * sizeof(char) + 4);
		if (grid[i] == NULL)
			return (NULL);
		i = i + 1;
	}
	ft_make_grid(grid, x);
	return (grid);
}
