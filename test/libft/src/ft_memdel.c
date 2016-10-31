/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:31:58 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:31:15 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

/*
**	ft_memdel free memories of 'ap'
*/

void	ft_memdel(void **ap)
{
	if (ap != NULL && *ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}
