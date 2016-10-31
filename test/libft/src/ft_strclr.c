/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:44:03 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:59:58 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strclr replace every character of a string 's' to '\0'
*/

void	ft_strclr(char *s)
{
	if (s != NULL)
		ft_memset(s, '\0', ft_strlen(s));
}
