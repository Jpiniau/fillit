/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:49:16 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 16:08:30 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strequ return 1 if 's1' is equal to 's2' or 0 if not
*/

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
		return (!ft_strcmp(s1, s2));
	else if (s1 == NULL && s2 == NULL)
		return (1);
	else
		return (0);
}
