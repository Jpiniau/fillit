/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 15:27:19 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/12 16:12:18 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putstrl align to the left and print str
*/

void	ft_putstrl(char	const *s, int n)
{
	int	size;
	int	i;

	size = ft_strlen(s);
	i = n - size;
	ft_putstr(s);
	while (i-- > 0)
		ft_putchar(' ');
}
