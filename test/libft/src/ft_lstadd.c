/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:18:26 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:16:39 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_lstadd adds a t_list* node 'new' to a t_list** list 'alst'
**	If 'new' or 'alst' are NULL ft_lstadd does nothing
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new != NULL && alst != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
