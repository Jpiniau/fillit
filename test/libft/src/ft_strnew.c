/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:17:13 by mdeken            #+#    #+#             */
/*   Updated: 2014/11/09 18:42:56 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_str;

	new_str = NULL;
	new_str = (char *)malloc(size);
	if (new_str != NULL)
	{
		ft_bzero(new_str, sizeof(new_str));
	}
	return (new_str);
}
