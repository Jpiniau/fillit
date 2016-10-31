/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:23:00 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 16:10:26 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
**	ft_strlen returns the size of a string 's'
*/

size_t	ft_strlen(const char *s)
{
	size_t result;

	result = 0;
	while (*s != '\0')
	{
		result++;
		s++;
	}
	return (result);
}
