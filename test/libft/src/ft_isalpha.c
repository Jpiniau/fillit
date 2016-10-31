/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:31:06 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/03 19:28:24 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_isalpha returns 1 if c is an alphabetic character or 0 if it is not
**
**	Exemple :
**		ft_isalpha('a')	= 1
**		ft_isalpha(12) = 0
**		ft_isalpha('4') = 0
**		ft_isalpha('-') = 0
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
