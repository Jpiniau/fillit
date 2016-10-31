/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:16:20 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:23:11 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
**	ft_memalloc allocates 'size' bytes of memory and initialized them to 0
**	If an error occurs or size is 0 ft_memalloc returns NULL
*/

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (size == 0)
		return (NULL);
	mem = malloc(size);
	if (mem != NULL)
		ft_bzero(mem, size);
	return (mem);
}
