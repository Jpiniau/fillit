/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:57:04 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/03 19:35:33 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_isprint returns 1 if c is printable on screen or 0 if not
**
**	Exemple :
**		ft_isprint('4')	= 1
**		ft_isprint('f')	= 1
**		ft_isprint(':') = 1
**		ft_isprint(2)	= 0
*/

int	ft_isprint(int c)
{
	if (c <= 31 || c >= 127)
		return (0);
	else
		return (1);
}
