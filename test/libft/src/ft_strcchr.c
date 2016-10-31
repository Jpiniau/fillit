/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:58:40 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:57:46 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strcchr returns the index of the first occurence of 'c'
**	in the string 'str'
**	If str is NULL or there is no 'c' character ft_strcchr returns -1
*/

int	ft_strcchr(const char *str, char c)
{
	int i;

	i = 0;
	if (str == NULL)
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	if (str[i] == c)
		return (i);
	return (-1);
}
