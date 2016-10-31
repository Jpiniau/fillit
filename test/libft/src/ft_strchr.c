/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:40:49 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:59:13 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
**	ft_strchr search a 'c' character in a 's' string.
**	It returns a pointer to the located character or NULL if there is no 'c'
**	character in 's'
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}
