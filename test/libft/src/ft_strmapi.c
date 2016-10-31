/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:43:37 by mdeken            #+#    #+#             */
/*   Updated: 2014/11/10 18:39:35 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*new_s;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	i = 0;
	new_s = (char *)malloc(sizeof(char) * size);
	while (i < size)
	{
		new_s[i] = (*f)(i, (char)*s++);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
