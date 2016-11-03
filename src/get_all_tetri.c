/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_all_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 14:02:52 by mdeken            #+#    #+#             */
/*   Updated: 2016/11/03 15:28:33 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetri.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

static t_list	*create_tetri(int fd)
{
	t_list	*new_tetri;
	char	**tetri;

	new_tetri = NULL;
	tetri = get_tetri(fd);
	//print_tetri(tetri);
	if (tetri != NULL && test_tetri(&tetri) == 1)
		new_tetri = ft_lstnew(tetri, sizeof(char **) * 4);
	return (new_tetri);
}

static void	del_lst(void *content, size_t size)
{
	char	**tetri;

	tetri = (char **)content;
	free_tetri(tetri);
	size = 0;
}


t_list	*get_all_tetri(char *path)
{
	int		fd;
	char	line[1];
	t_list	*all_tetri;
	t_list	*new_tetri;
	int		ok;


	all_tetri = NULL;
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		ft_putendl("error1");
		exit(-1);
	}
	ok = 1;
	while (ok > 0)
	{
		new_tetri = create_tetri(fd);
		ok = read(fd, line, 1);
		while (1);
		if ((ok == 1 && line[0] != '\n') || new_tetri == NULL)
			ok = -1;
		if (ok != -1)
			ft_lstaddback(&all_tetri, new_tetri);
	}
	close(fd);
	if (ok == -1)
	{
		ft_lstdel(&all_tetri, del_lst);
		ft_putendl("error2");
		exit(-1);
	}
	return (all_tetri);
}
