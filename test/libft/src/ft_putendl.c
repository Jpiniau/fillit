/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:17:35 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:48:08 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putendl displays the string 's' followed by an end of line '\n'
**	on console.
*/

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
