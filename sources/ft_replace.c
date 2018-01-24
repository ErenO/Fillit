/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 11:27:19 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/18 16:21:50 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_replace(char **tab, char c, int size_map)
{
	int i;
	int j;

	i = 0;
	while (i < size_map)
	{
		j = 0;
		while (j < size_map)
		{
			if (tab[i][j] == c)
				tab[i][j] = '.';
			j++;
		}
		i++;
	}
}
