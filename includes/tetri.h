/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 12:49:07 by jpiniau           #+#    #+#             */
/*   Updated: 2016/10/31 15:59:39 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TETRI_H
# define TETRI_H

#include "libft.h"

void	free_tetri(char **tetri);
t_list	*get_all_tetri(char *path);
char	**get_tetri(int fd);
int		test_tetri(char ***tetri);

#endif
