/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tetri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 16:35:31 by jpiniau           #+#    #+#             */
/*   Updated: 2016/10/31 14:37:49 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

char	**get_tetri(char *file)
{
	int		fd;
	int		index;
	char	line[5];
	char	**tmp;

	index = 0;
	tmp = NULL;
	fd = open(file, O_RDONLY);
	tmp = (char **)malloc(sizeof(char *) * 4);
	ft_bzero(tmp, sizeof(char *) * 4);
	while (read(fd, line, 5))
	{
		if (line[4] != '\n')
		{
			while (--index >= 0)
				free(tmp[index]);
			free(tmp);
			return (NULL);
		}
		tmp[index] = ft_strndup(line, 4);
		index++;
	}
	return (tmp);
}
