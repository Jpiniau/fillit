/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmptetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 15:33:06 by jpiniau           #+#    #+#             */
/*   Updated: 2016/10/27 16:54:33 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetri.h" 
#include "libft.h" 

int		paste_hash(char **tetri)
{
	int x;
	int y;

	y = -1;
	while (++y <= 4)
	{
		x = -1;
		while (++x <= 4)
		{
			if (tetri[y][x] == '#')
				if (tetri[y - 1][x] != '#' && tetri[y + 1][x] != '#' &&
						tetri[y][x - 1] != '#' && tetri[y][x + 1] != '#')
					return (1);
		}
	}
	return (0);
}

int		count_hash(char **tetri)
{
	int x;
	int y;
	int point;
	int hash;

	point = 0;
	hash = 0;
	y = -1;
	while (++y <= 4)
	{
		x = -1;
		while (++x <= 4)
		{
			if (tetri[y][x] == '#')
				hash++;
			if (tetri[y][x] == '.')
				point++;
		}
	}
	if (hash == 4 && point == 12)
		return (0);
	else
		return (1);
}

int		valid_tetri(char **tetri)
{
	if (count_hash(tetri))
		return (1);
	if (paste_hash(tetri))
		return (1);
	return (0);
}

void	test_tetri(char	**tetri)
{
	int	ret;

	ret = valid_tetri(tetri);
	if (ret)
		ft_putstr("error");
	else
		ft_putstr("ok");
}
