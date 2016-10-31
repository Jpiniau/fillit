/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 13:56:12 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:46:00 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putendc displays on console the string 's' followed by 'c' character
**	ft_putendc does not concat 's' and 'c'
*/

void	ft_putendc(char const *s, char const c)
{
	ft_putstr(s);
	ft_putchar(c);
}
