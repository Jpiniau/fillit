/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tetri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 16:35:31 by jpiniau           #+#    #+#             */
/*   Updated: 2016/10/27 16:46:03 by jpiniau          ###   ########.fr       */
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
