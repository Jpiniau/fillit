/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchr_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 16:16:12 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/13 16:18:43 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strcchr_last search the last occurence of a character in a string
**	It returns the last index of c character
**	If the c character is not found in the string ft_strcchr_last returns -1
*/

int	ft_strcchr_last(const char *str, char c)
{
	int	i;
	int	result;

	i = 0;
	result = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			result = i;
		i++;
	}
	return (result);
}
