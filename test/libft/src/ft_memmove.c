/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:11:05 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:33:16 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_memmove copies 'len' bytes from 'src' to 'dst'
**	If 'src' and 'dst' overlap the copy is done in a non-destructive manner
**	It returns the original value of 'dst'
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	cpy[len];

	ft_memcpy((void *)cpy, src, len);
	ft_memcpy(dst, (void *)cpy, len);
	return (dst);
}
