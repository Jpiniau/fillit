/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:30:52 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:52:30 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
**	ft_putstr_fd writes the string 's' on fd
*/

void	ft_putstr_fd(char const *s, int fd)
{
	if (s != NULL)
	{
		write(fd, s, ft_strlen(s));
	}
	else
		ft_putstr_fd("(null)", fd);
}
