/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:18:47 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/03 19:16:24 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_atoi converts a string to a number which is returned as an int
**
**	The function skip the whitespace until the first non-whitespace is found.
**	Then the function converts the string until a non-digit character is found.
**	The string may have a '+' or a '-' character at the beginning.
**	If the string is not valid the function returns 0
**
**	Exemple :
**	ft_atoi("123") 		-> 123
**	ft_atoi("     123")	-> 123
**	ft_atoi("123abc")	-> 123
**	ft_atoi("")			-> 0
**	ft_atoi("abc")		-> 0
**	ft_atoi("abc123")	-> 0
*/

static int	is_valid(const char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int number;
	int is_negative;

	number = 0;
	is_negative = 0;
	while (*str != '\0' && is_valid(*str))
		str++;
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != '\0' && ft_isdigit(*str))
	{
		number *= 10;
		number += (*str - '0');
		str++;
	}
	if (is_negative)
		number *= -1;
	return (number);
}
