/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 10:50:45 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/03 19:39:01 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	ft_itoa converts an int number n to a string which is returned.
**	Negative numbers are supported
**
**	Exemple :
**		ft_itoa(123)	-> "123"
**		ft_itoa(-123)	-> "-123"
*/

static size_t	size_number(int n)
{
	size_t	size;

	size = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 10)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char		*create_a(char *a, int n, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = size;
	if (n < 0)
	{
		a[i++] = '-';
		n *= -1;
	}
	while (j > i)
	{
		if (a[j--] != '-')
			a[j] = (n % 10) + '0';
		n /= 10;
	}
	a[size] = '\0';
	return (a);
}

char			*ft_itoa(int n)
{
	char	*a;
	size_t	size;

	size = size_number(n);
	a = (char *)malloc(sizeof(char) * size + 1);
	if (a != NULL)
	{
		if (n == -2147483648)
			ft_strcpy(a, "-2147483648");
		else
			a = create_a(a, n, size);
	}
	return (a);
}
