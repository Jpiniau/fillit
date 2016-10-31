/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:56:09 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:49:56 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putnbr displays an int number 'n' on console
**	Negative numbers are supported
*/

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putchar((n % 10) + '0');
		}
		else
			ft_putchar(n + '0');
	}
}
