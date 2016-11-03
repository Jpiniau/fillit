/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 12:49:07 by jpiniau           #+#    #+#             */
/*   Updated: 2016/11/03 11:36:46 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TETRI_H
# define TETRI_H

#include "libft.h"

void	free_tetri(char **tetri);
t_list	*get_all_tetri(char *path);
char	**get_tetri(int fd);
int		test_tetri(char ***tetri);
char	**go_topleft(char **tetri);
void	print_tetri(char **tetri);

#endif
