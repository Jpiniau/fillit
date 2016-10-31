/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/10 12:19:53 by mdeken            #+#    #+#             */
/*   Updated: 2015/03/03 16:54:21 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *str, size_t n)
{
	char	*ptr;

	ptr = NULL;
	if (str != NULL)
	{
		ptr = ft_strnew(n + 1);
		if (ptr == NULL)
			return (NULL);
		ft_strncpy(ptr, str, n);
		ptr[n] = '\0';
	}
	return (ptr);
}
