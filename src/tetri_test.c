/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 12:09:10 by jpiniau           #+#    #+#             */
/*   Updated: 2016/10/27 15:53:35 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include "tetri.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

char	**get_tetri(char *file)
{
	int		fd;
	int		index;
	char	line[5 + 1];
	char	**tmp;

	index = 0;
	tmp = NULL;
	fd = open(file, O_RDONLY);
	tmp = (char **)malloc(sizeof(char *) * 4);
	*tmp = (char *)malloc(sizeof(char) * 4);
	while (read(fd, line, 5))
	{
		++index;
		tmp[index] = ft_strdup(line);
	}
	return (tmp);
}

void	print_onetetri(char **tetri)
{
	int		i;

	i = -1;
	ft_putstr("PRINT\n");
	while (++i <= 4)
		ft_putstr(tetri[i]);
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
	print_onetetri(test);
	test_tetri(test);
	return (0);
}
