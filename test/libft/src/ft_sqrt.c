/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 19:51:54 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:54:30 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_sqrt returns the square root of double number 'x'
*/

double	ft_sqrt(double x)
{
	double	root;
	int		i;

	i = -1;
	root = x / 2;
	while (++i < 100)
	{
		root = (((x / root) + root) / 2);
	}
	return (root);
}
