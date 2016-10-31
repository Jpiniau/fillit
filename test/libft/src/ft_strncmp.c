/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:24:55 by mdeken            #+#    #+#             */
/*   Updated: 2015/08/25 16:17:47 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n > 0)
	{
		while (n > 0 && *s1 != '\0' && *s2 != '\0')
		{
			if (*s1 > *s2)
				return (1);
			else if (*s1 < *s2)
				return (-1);
			else
			{
				s1++;
				s2++;
			}
			n--;
		}
		if (n == 0 || (*s1 == '\0' && *s2 == '\0'))
			return (0);
		else if (*s1 == '\0')
			return (-1);
		else if (*s2 == '\0')
			return (1);
	}
	return (n);
}
