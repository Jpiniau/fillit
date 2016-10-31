/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:46:54 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/03 19:31:18 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_isascii returns 1 if c is in the ascii table or 0 if not
**
**	Exemple :
**		ft_isascii('a')		= 1
**		ft_isascii('@')		= 1
**		ft_isascii(0)		= 1
**		ft_isascii(-5)		= 0
**		ft_isascii(1625)	= 0
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	else
		return (0);
}
