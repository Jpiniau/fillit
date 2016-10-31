/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 15:46:56 by mdeken            #+#    #+#             */
/*   Updated: 2016/10/19 15:30:51 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putnbrr displays a number aligned at right
*/

void	ft_putnbrr(int nbr, int n)
{
	int	padding;

	padding = n - ft_nbrlen(nbr);
	while (padding-- > 0)
		ft_putchar(' ');
	ft_putnbr(nbr);
}
