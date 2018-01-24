/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:00:57 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/18 10:21:20 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strcpy_mod(char *dst, char *src)
{
	int	i;
	int tmp;

	if (dst == NULL || src == NULL)
		return (NULL);
	i = 0;
	tmp = 0;
	while (src[i] != '\0')
	{
		while (src[i + tmp] == '\n')
		{
			tmp++;
		}
		dst[i] = src[i + tmp];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
