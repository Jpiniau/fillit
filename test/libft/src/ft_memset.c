/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:43:55 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:34:35 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
**	ft_memset sets 'len' bytes to 'c' in 'b'
**	It returns 'b'
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (b);
}
