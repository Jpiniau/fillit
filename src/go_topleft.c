/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_topleft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:30:25 by jpiniau           #+#    #+#             */
/*   Updated: 2016/11/03 11:55:35 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetri.h"
#include "libft.h"
#include <stdlib.h>

static char	**go_top(char **tetri, int *ii, int *point)
{
	*ii = -1;
	*point = 0;
	free(tetri[0]);
	tetri[0] = tetri[1];
	tetri[1] = tetri[2];
	tetri[2] = tetri[3];
	tetri[3] = ft_strdup("....");
	return (tetri);
}

static char	**go_left(char **tetri, int *ii, int *point)
{
	int i;

	*ii = -1;
	*point = 0;
	i = -1;
	while (++i < 3)
	{
		tetri[0][i] = tetri[0][i + 1];
		tetri[1][i] = tetri[1][i + 1];
		tetri[2][i] = tetri[2][i + 1];
		tetri[3][i] = tetri[3][i + 1];
	}
	tetri[0][3] = '.';
	tetri[1][3] = '.';
	tetri[2][3] = '.';
	tetri[3][3] = '.';
	return (tetri);
}

char		**go_topleft(char **tetri)
{
	int		point;
	int		i;

	point = 0;
	i = -1;
	while (++i < 4)
	{
		if (tetri[i][0] == '.')
			point++;
		if (point == 4)
			tetri = go_left(tetri, &i, &point);
	}
	point = 0;
	i = -1;
	while (++i < 4)
	{
		if (tetri[0][i] == '.')
			point++;
		if (point == 4)
			tetri = go_top(tetri, &i, &point);
	}
	return (tetri);
}
