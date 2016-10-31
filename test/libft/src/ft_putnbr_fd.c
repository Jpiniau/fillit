/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 12:36:59 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:50:29 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putnbr_fd writes the int number 'n' on fd
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd((n % 10), fd);
		}
		else
			ft_putchar_fd(n + '0', fd);
	}
}
