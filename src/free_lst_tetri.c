/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_lst_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:22:39 by jpiniau           #+#    #+#             */
/*   Updated: 2016/11/05 14:28:20 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetri.h"
#include <stdlib.h>

void	free_lst_tetri(void *content, size_t i)
{
	t_tetri *tetri;

	(void)i;
	tetri = (t_tetri *)content;
	free_tetri(tetri->tetri);
	free(tetri);
	tetri = NULL;
}
