/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:44:20 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/03 19:26:39 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_isalnum returns 1 if c is either an alphabetic character or a digit
**	else it returns 0
**
**	Exemple :
**		ft_isalnum(0)	= 0
**		ft_isalnum('a')	= 1
**		ft_isalnum('5')	= 1
**		ft_isalnum('*') = 0
*/

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
