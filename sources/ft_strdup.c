/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:46:40 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/18 14:20:01 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strdup(char *s1)
{
	char	*ptr;
	size_t	lenght;

	if (s1 == NULL)
		return (NULL);
	lenght = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * lenght + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strcpy_mod(ptr, s1);
	return (ptr);
}
