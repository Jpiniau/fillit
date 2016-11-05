/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 12:49:07 by jpiniau           #+#    #+#             */
/*   Updated: 2016/11/05 15:45:57 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TETRI_H
# define TETRI_H

#include "libft.h"

typedef struct	s_tetri
{
	char 		**tetri;
	int			x;
	int			y;
}				t_tetri;


void	free_tetri(char **tetri);
t_list	*get_all_tetri(char *path);
char	**get_tetri(int fd);
int		test_tetri(char ***tetri);
char	**go_topleft(char **tetri);
char	**replace(char **tetri);
void	free_lst_tetri(void *content, size_t size);
void	put_rep(t_list *tetri);
void	print_tetri(char **tetri);

#endif
