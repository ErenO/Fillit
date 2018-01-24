/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:15:18 by eozdek            #+#    #+#             */
/*   Updated: 2016/01/05 12:13:53 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		checkreturn(char *av, int i, int j)
{
	while (av[i] != '\0')
	{
		if (av[i] == '\n')
			j++;
		i++;
	}
	i++;
	if (i < 547 && j < 156 && i > 20)
		return (1);
	else
		return (0);
}

int		checkline(char *av, int i, int j, int n)
{
	int k;

	k = 0;
	while (av[i] != '\0')
	{
		n = 0;
		j = 4;
		while ((av[i] == '#' || av[i] == '.') && j > 0)
		{
			if (av[i] != '\n' || av[i] != '\0')
				j--;
			n++;
			i++;
		}
		if (j != 0 && n > 0)
			return (0);
		i++;
	}
	return (1);
}

int		checkcolumn(char *av, int i, int j, int n)
{
	int h;

	while (av[i] != '\0')
	{
		h = 4;
		j = 0;
		n = 0;
		while (av[i] != '\0' && h > 0)
		{
			if (av[i] == '\n')
				h--;
			i++;
			n++;
		}
		if (av[i] != 10 && av[i] != 0)
			return (0);
		if (h != 0 && n > 0)
			return (0);
		if (av[i] == '\n')
			i++;
	}
	return (1);
}

int		checknumber(char *av, int i)
{
	int k;
	int h;

	h = 0;
	k = 0;
	while (av[i] != '\0')
	{
		i = ft_check_plus(av, i);
		if (i == 0)
			return (i);
		if (av[i] == '\n')
			i++;
	}
	return (1);
}

int		verif(char *s)
{
	int		i;
	int		j;
	int		n;

	n = 0;
	i = 0;
	j = 0;
	if ((checkreturn(s, i, j) == 0))
		return (0);
	if ((checkline(s, i, j, n) == 0))
		return (0);
	if ((checkcolumn(s, i, j, n) == 0))
		return (0);
	if ((checknumber(s, i) == 0))
		return (0);
	return (1);
}
