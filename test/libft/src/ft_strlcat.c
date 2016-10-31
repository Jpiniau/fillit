/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:00:42 by mdeken            #+#    #+#             */
/*   Updated: 2014/12/10 12:04:48 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t l_dst;
	size_t l_src;
	size_t i;

	i = -1;
	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (size != 0 && size - 1 > l_dst)
	{
		while (++i < size - l_dst - 1)
		{
			dst[l_dst + i] = src[i];
		}
		dst[l_dst + i] = '\0';
	}
	else
		l_dst = size;
	return (l_dst + l_src);
}
