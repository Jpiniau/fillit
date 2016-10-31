/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:06:28 by mdeken            #+#    #+#             */
/*   Updated: 2014/11/10 17:19:45 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	else
	{
		while (*s1 != '\0' && n)
		{
			if (*s1 == *s2)
			{
				while (*(s1 + i) == *(s2 + i) && n - i)
				{
					i++;
					if (*(s2 + i) == '\0')
						return ((char *)s1);
				}
			}
			n--;
			s1++;
		}
	}
	return (NULL);
}
