/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:58:17 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:28:37 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
**	ft_memcmp compared 's1' to 's2'
**	It returns 0 is 's1' is equal to 's2'
**	Otherwise it returns the difference between the first two differing bytes.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_cpy;
	unsigned char *s2_cpy;

	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	while (n--)
	{
		if (*s1_cpy != *s2_cpy)
			return (*s1_cpy - *s2_cpy);
		s1_cpy++;
		s2_cpy++;
	}
	return (0);
}
