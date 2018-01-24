/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 09:08:38 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/23 14:21:21 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_get_buffer(char **tab, int i)
{
	char	buf[BUF_SIZE + 1];
	int		ret;
	int		fd;
	char	*str;
	char	*s1;

	if (!(fd = open(tab[1], O_RDONLY)))
		error();
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		s1 = ft_strdup_mod(buf);
		if (verif(s1) == 0)
			error();
		str = ft_strdup(buf);
		if ((ret + 1) % 21 != 0)
			error();
		i++;
	}
	if (i == 0)
		error();
	free(s1);
	if (close(fd) == -1)
		error();
	return (str);
}
