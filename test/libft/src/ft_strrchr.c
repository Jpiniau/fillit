/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:48:24 by mdeken            #+#    #+#             */
/*   Updated: 2014/11/10 17:35:42 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char *last;

	last = NULL;
	if (*s == c)
		last = (char *)s;
	while (*s++ != '\0')
	{
		if (*s == c)
			last = (char *)s;
	}
	return (last);
}
