/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_all_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 14:02:52 by mdeken            #+#    #+#             */
/*   Updated: 2016/11/05 14:29:22 by jpiniau          ###   ########.fr       */
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
	t_tetri new;

	new_tetri = NULL;
	tetri = get_tetri(fd);
	if (tetri != NULL && test_tetri(&tetri) == 1)
	{
	//	if (!(new = (t_tetri *)malloc(sizeof(t_tetri))))
	//		return (NULL);
		new.tetri = tetri;
		new.x = 0;
		new.y = 0;
		new_tetri = ft_lstnew(&new, sizeof(t_tetri));
	}
	return (new_tetri);
}

t_list	*get_all_tetri(char *path)
{
	int		fd;
	char	line;
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
		ok = read(fd, &line, sizeof(char) * 1);
		if ((ok == 1 && line != '\n') || new_tetri == NULL)
			ok = -1;
		if (ok != -1)
			ft_lstaddback(&all_tetri, new_tetri);
	}
	close(fd);
	if (ok == -1)
	{
		ft_lstdel(&all_tetri, free_lst_tetri);
		ft_putendl("error2");
		exit(-1);
	}
	return (all_tetri);
}
