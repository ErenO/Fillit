/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduce.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:08:36 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/23 14:22:14 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*ft_reduce(char *string, int *ijk, int *position)
{
	while (ijk[0] <= (15 + ijk[2]))
	{
		if (ijk[0] <= (3 + ijk[2]) && ijk[0] >= (0 + ijk[2])
				&& string[ijk[0]] == '#')
			position = ft1(position, ijk);
		else if (ijk[0] <= (7 + ijk[2]) && ijk[0] >= (4 + ijk[2])
				&& string[ijk[0]] == '#')
			position = ft2(position, ijk);
		else if (ijk[0] <= (11 + ijk[2]) && ijk[0] >= (8 + ijk[2])
				&& string[ijk[0]] == '#')
			position = ft3(position, ijk);
		else if (ijk[0] <= (15 + ijk[2]) && ijk[0] >= (12 + ijk[2])
				&& string[ijk[0]] == '#')
			position = ft4(position, ijk);
		else
			ijk[0] = ijk[0] + 1;
	}
	return (position);
}
