/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imemset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 15:56:22 by mdeken            #+#    #+#             */
/*   Updated: 2016/10/19 15:24:55 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_imemset initializes an int array b to an int value c
**	Ex :	ft_imemset(b, 5, 4);
**
**	b = 5 | 5 | 5 | 5
*/

int	*ft_imemset(int *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		b[i] = c;
		i++;
	}
	return (b);
}
