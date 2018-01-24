/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 14:15:29 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/17 10:25:42 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_print_grid(char **tab, int size_map)
{
	int i;
	int j;

	i = 0;
	while (i < size_map)
	{
		j = 0;
		while (j < size_map)
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
	return (tab);
}
