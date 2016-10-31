/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 18:25:09 by mdeken            #+#    #+#             */
/*   Updated: 2016/10/23 15:12:22 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function returns the lenght of number in bits
** If n is negative the function returns 0
**
** Exemple :	ft_bitslen(0) = 1	0 -> 0
**				ft_bitslen(10) = 4	10 -> 1010
*/

size_t	ft_bitslen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		i++;
		n >>= 1;
	}
	return (i);
}
