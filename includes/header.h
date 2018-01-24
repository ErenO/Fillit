/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssicard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:32:48 by ssicard           #+#    #+#             */
/*   Updated: 2015/12/30 11:46:25 by ssicard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUF_SIZE 4096
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct s_list	t_list;
struct	s_list
{
	int		x[4];
	int		y[4];
	char	name;
	t_list	*next;
};

void	ft_putstr(char	*str);
void	ft_putchar(char	c);
int		ft_strlen(char *s);
void	ft_putnbr(int nbr);
char	*ft_get_buffer(char **tab, int i);
char	*ft_strcpy_mod(char *dst, char *src);
char	*ft_strdup(char *s1);
char	*ft_strdup_mod(char *s1);
t_list	*ft_create_chain(char *str);
int		*ft_convert(char *string, int i);
t_list	*ft_create_elem(int *position);
t_list	*ft_add_link(int *position, char fill);
void	ft_list_push_back(t_list *begin_list, int *position, char fill);
void	ft_print_list(t_list *list);
void	ft_epur(t_list *begin_list);
void	ft_solve(t_list *begin_list, char *str);
char	**ft_alloc_mem(int x, int y);
char	**ft_print_grid(char **tab, int size_map);
int		is_clean(char **tab, t_list *begin, int position, int size_map);
void	ft_replace(char **tab, char c, int size_map);
int		ft_check_piece(t_list *begin, char **tab, int position, int size_map);
void	ft_put_piece(char **tab, t_list *begin, int position, int size_map);
void	ft_make_grid(char **tab, int size_map);
int		checknumber(char *av, int i);
int		verif(char *s);
int		checkcolumn(char *av, int i, int j, int n);
int		checkline(char *av, int i, int j, int n);
int		checkreturn(char *av, int i, int j);
void	error(void);
int		ft_check_plus(char *av, int i);
int		*ft_reduce(char *string, int *ijk, int *position);
int		*ft1(int *position, int *ijk);
int		*ft2(int *position, int *ijk);
int		*ft3(int *position, int *ijk);
int		*ft4(int *position, int *ijk);
#endif
