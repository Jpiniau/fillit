/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_hash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 16:40:39 by jpiniau           #+#    #+#             */
/*   Updated: 2016/10/27 16:47:38 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
