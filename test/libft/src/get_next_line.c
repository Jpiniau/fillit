/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 15:58:13 by mdeken            #+#    #+#             */
/*   Updated: 2014/12/12 17:08:37 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_realloc(char *ptr, size_t size)
{
	char	*ptr2;

	ptr2 = (char *)ft_memalloc(size * sizeof(char));
	ft_strncpy(ptr2, ptr, size);
	ptr = NULL;
	return (ptr2);
}

static int	ft_fill_line(char **line, char **buf, int ret)
{
	int		n;

	if (ret == -1)
		*buf = NULL;
	if (ret == -1)
		return (-1);
	if (ret == 0 && *buf[0] == '\0')
	{
		*buf = NULL;
		*line = ft_strdup("\0");
		return (0);
	}
	n = ft_strcchr(*buf, '\n');
	if (n > -1)
	{
		*line = ft_strndup(*buf, n);
		*buf += n + 1;
	}
	else
	{
		*line = ft_strdup(*buf);
		ft_strclr(*buf);
		*buf = NULL;
	}
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	static char	*buf;
	char		tmp[BUFF_SIZE + 1];
	int			is_n;
	int			ret;
	size_t		size;

	ret = 1;
	if (BUFF_SIZE > 0 && buf == NULL && line != NULL)
		buf = (char *)ft_memalloc(sizeof(char) * BUFF_SIZE + 1);
	if (BUFF_SIZE <= 0 || buf == NULL || fd < 0 || line == NULL)
		return (-1);
	size = 1 + ft_strlen(buf);
	while ((is_n = ft_strcchr(buf, '\n')) == -1 && ret > 0)
	{
		if ((ret = read(fd, tmp, BUFF_SIZE)))
		{
			tmp[ret] = '\0';
			size += BUFF_SIZE;
			if ((buf = (char *)ft_realloc(buf, size)) == NULL)
				return (-1);
			ft_strcat(buf, tmp);
		}
	}
	return (ft_fill_line(line, &buf, ret));
}
