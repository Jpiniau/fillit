/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmptetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 15:33:06 by jpiniau           #+#    #+#             */
/*   Updated: 2016/10/27 16:17:35 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetri.h" 
#include "libft.h" 

int		count_d(char **tetri)
{
	int x;
	int y;
	int p;
	int d;

	p = 0;
	d = 0;
	y = -1;
	while (++y <= 4)
	{
		x = -1;
		while (++x <= 4)
		{
			if (tetri[y][x] == '#')
				d++;
			if (tetri[y][x] == '.')
				p++;	
		}
	}
	if (d == 4 && p == 12)
		return (0);
	else
		return (1);
}

int		paste_h(char **tetri)
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

int		valid_tetri(char **tetri)
{
	if (count_d(tetri))
		return (1);
	if (paste_h(tetri))
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
