/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:33:21 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:26:59 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
**	ft_memchr locates the first occurence of 'c' in 's'
**	It returns a pointer to the byte located or NULL is 'c' doesn't exist
**	within n
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s2;

	s2 = (unsigned char *)s;
	while (n-- && s2 != NULL)
	{
		if (*s2 == (unsigned char)c)
			return ((void *)s2);
		s2++;
	}
	return (NULL);
}
