/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:29:05 by mdeken            #+#    #+#             */
/*   Updated: 2014/11/10 18:38:44 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_s;
	size_t	size;
	size_t	i;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	i = 0;
	new_s = (char *)malloc(sizeof(char) * size);
	if (new_s != NULL)
	{
		while (i < size)
		{
			new_s[i] = (*f)(*s++);
			i++;
		}
		new_s[i] = '\0';
	}
	return (new_s);
}
