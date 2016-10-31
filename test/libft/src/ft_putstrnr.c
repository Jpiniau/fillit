/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrnr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 16:56:39 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/12 17:06:18 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstrnr(char const *s, size_t n, int offset)
{
	int	padding;

	padding = offset - n;
	while (padding-- > 0)
		ft_putchar(' ');
	write(1, s, n);
}
