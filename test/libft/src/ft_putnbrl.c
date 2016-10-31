/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 16:18:00 by mdeken            #+#    #+#             */
/*   Updated: 2016/10/19 18:08:01 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putnbrl display a number aligned at left
*/

void	ft_putnbrl(int nbr, int n)
{
	int	padding;

	padding = n - ft_nbrlen(nbr);
	ft_putnbr(nbr);
	while (padding-- > 0)
		ft_putchar(' ');
}
