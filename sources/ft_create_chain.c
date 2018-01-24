/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_chain.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:21:38 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/18 18:30:34 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list		*ft_create_chain(char *str)
{
	t_list	*head;
	size_t	i;
	size_t	j;
	char	a;

	j = 0;
	a = 'A';
	i = ft_strlen(str) / 16;
	while (j < i)
	{
		if (a == 65)
			head = ft_add_link(ft_convert(str, 0), a);
		else
			ft_list_push_back(head, ft_convert(str, j * 16), a);
		a++;
		j++;
	}
	return (head);
}
