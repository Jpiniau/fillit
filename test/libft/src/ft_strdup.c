/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:26:55 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 16:07:13 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	ft_strdup allocates enought memory for a copy of the string 's1'
**	It returns a pointer of the copy or NULL if an error occured
*/

char	*ft_strdup(const char *src)
{
	char	*ptr;
	int		length;

	ptr = NULL;
	if (src != NULL)
	{
		length = ft_strlen(src);
		ptr = (char *)malloc(sizeof(char) * (length + 1));
		if (ptr != NULL)
			ft_strcpy(ptr, src);
	}
	return (ptr);
}
