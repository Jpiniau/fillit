/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:58:53 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 16:02:41 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_strcmp compared the strings 's1' and 's2' by ascii order
**	It returns :	1 if 's1' is greater than 's2'
**					-1 if 's2' is greater than 's1'
**					0 is 's1' is equal to 's2'
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
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
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if (*s1 == '\0')
		return (-1);
	else
		return (1);
}
