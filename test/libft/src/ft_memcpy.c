/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:48:56 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:30:16 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
**	ft_memcpy copies n bytes from 'src' to 'dst'
**	If 'src' and 'dst' overlap behavior is undefined
**	It returns the original value of 'dst'
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
