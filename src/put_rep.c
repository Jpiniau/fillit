/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_rep.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:04:47 by jpiniau           #+#    #+#             */
/*   Updated: 2016/11/05 15:45:59 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetri.h"
#include "libft.h"
#include <stdlib.h>

void	set_pos(t_list *tetri)
{
	t_tetri *tmp;


	tmp = (t_tetri *)tetri->content;
	tmp->x = 0;
	tmp->y = 0;
	tetri = tetri->next;
	while (tetri != null)
	{
		tmp = (t_tetri *)tetri->content;
		tmp->x = 2;
		tmp->y = 0;
	}
}

char	**set_ret(t_list *tetri)
{
	char	**ret;
	int		x;
	int		y;
	int		xx;
	int		yy;
	int		catch;
	t_tetri	*tmp;

	(void)tetri;
	x = -1;
	ret = (char **)malloc(sizeof(char *) * 6);
	while (++x < 6)
		ret[x] = ft_strndup("......", 6);

	while (tetri != NULL)
	{
		catch = 0;
		yy = 0;
		tmp = (t_tetri *)tetri->content;
		y = -1;
		while (++y < 6)
		{
			xx = 0;
			x = -1;
			while (++x < 6)
			{
				if (tmp->x == x && tmp->y == y)
					catch = 1;
				if (catch && yy < 4 && xx < 4)
				{
					if (tmp->tetri[yy][xx] != '.')
					ret[y][x] = tmp->tetri[yy][xx];
					xx++;
				}
			}
			if (catch)
				yy++;
		}
		tetri = tetri->next;
	}
	return (ret);
}

void	put_rep(t_list *tetri)
{
	char	**ret;
	int		i;
	int		j;

	(void)tetri;
	set_pos(tetri);
	ret = set_ret(tetri);
	i = -1;
	while (++i < 6)
	{
		j = -1;
		while (++j < 6)
			ft_putchar(ret[i][j]);
		ft_putchar('\n');
	}
}
