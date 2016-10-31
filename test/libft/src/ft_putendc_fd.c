/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendc_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 14:00:34 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:47:03 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putendc_fd writes the string 's' followed by the 'c' character on fd
**	It does not concat 's' and 'c'
*/

void	ft_putendc_fd(char const *s, char const c, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd(c, fd);
}
