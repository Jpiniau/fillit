/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:45:54 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:50:51 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
**	ft_putstr displays the string 's' on console
*/

void	ft_putstr(char const *s)
{
	if (s != NULL)
	{
		write(1, s, ft_strlen(s));
	}
	else
		ft_putstr("(null)");
}
