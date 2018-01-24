/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 19:25:35 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/23 14:32:49 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	int		i;
	char	*str;
	t_list	*list;
	t_list	*tmp;

	i = 0;
	list = NULL;
	if (ac != 2)
		error();
	str = ft_get_buffer(av, i);
	list = ft_create_chain(str);
	tmp = list;
	ft_epur(tmp);
	ft_solve(list, str);
	free(str);
	return (0);
}
