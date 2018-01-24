/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 08:04:17 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/23 14:21:42 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*ft_convert(char *string, int i)
{
	int	*position;
	int *ijk;

	if ((position = (int *)malloc(sizeof(int) * 8)) == NULL)
		return (NULL);
	if ((ijk = (int *)malloc(sizeof(int) * 3)) == NULL)
		return (NULL);
	ijk[1] = 0;
	ijk[2] = i;
	position = ft_reduce(string, ijk, position);
	return (position);
}
