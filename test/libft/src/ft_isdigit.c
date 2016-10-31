/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:41:53 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/03 19:33:36 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_isdigit returns 1 if c is a digit character or 0 if not
**
**	Exemple :
**		ft_isdigit(1)	= 0
**		ft_isdigit('1')	= 1
**		ft_isdigit('a') = 0
**		ft_isdigit('$') = 0
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
