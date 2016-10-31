/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 12:09:10 by jpiniau           #+#    #+#             */
/*   Updated: 2016/10/31 14:13:51 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include "tetri.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void	print_onetetri(char **tetri)
{
	int		i;

	i = -1;
	ft_putstr("PRINT\n");
	while (++i < 4)
		ft_putendl(tetri[i]);
	ft_putstr("END PRINT\n");
}

int		main(int ac, char **av)
{
	char	**test;
	int 	i;

	(void)ac;
	i = -1;
	ft_putstr("TEST\n");
	test = get_tetri(av[1]);
	if (test == NULL)
		ft_putendl("ERRRORRR");
	else
	{
		print_onetetri(test);
		test_tetri(test);
	}
	return (0);
}
