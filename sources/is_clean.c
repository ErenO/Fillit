/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 21:02:22 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/18 16:46:18 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_clean(char **tab, t_list *begin, int position, int size_map)
{
	while (position < size_map * size_map)
	{
		if ((ft_check_piece(begin, tab, position, size_map) == 1))
		{
			ft_put_piece(tab, begin, position, size_map);
			if (begin->next == NULL)
				return (1);
			else
			{
				if (is_clean(tab, begin->next, 0, size_map))
					return (1);
				ft_replace(tab, begin->name, size_map);
			}
		}
		position++;
	}
	return (0);
}
