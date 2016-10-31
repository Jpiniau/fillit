/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:27:12 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/03 19:21:34 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_bzero set to 0 the n-th first bytes of the memory pointed by s
**
**	Exemple :
**		s[3];
**		ft_bzero(s, 3) -> [0][0][0]
**		ft_bzero(s, 2) -> [0][0][?]
*/

void	ft_bzero(void *s, size_t n)
{
	char		*s2;
	size_t		i;

	s2 = s;
	i = 0;
	if (s != NULL)
	{
		while (i < n)
		{
			s2[i] = 0;
			i++;
		}
	}
}
