/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:29:58 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:42:46 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_pow returns the result of operation x^y as an int
*/

int	ft_pow(int x, int y)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	if (y == 0)
		return (1);
	else if (y < 0)
		return (0);
	while (i < y)
	{
		result *= x;
		i++;
	}
	return (result);
}
