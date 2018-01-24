/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 21:03:25 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/23 14:20:23 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*ft3(int *position, int *ijk)
{
	position[ijk[1]] = ijk[0] - 8 - ijk[2] + 1;
	position[ijk[1] + 1] = 3;
	ijk[1] = ijk[1] + 2;
	ijk[0] = ijk[0] + 1;
	return (position);
}
