/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmptetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 15:33:06 by jpiniau           #+#    #+#             */
/*   Updated: 2016/10/27 16:46:39 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetri.h" 
#include "libft.h" 

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
