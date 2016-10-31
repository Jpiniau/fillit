/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 15:42:55 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:18:56 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_lstaddback adds a t_list* node 'new' to a t_list** list 'lst'
**	If lst is NULL ft_lstaddback does nothin
*/

void	ft_lstaddback(t_list **lst, t_list *new)
{
	if (lst != NULL)
	{
		if (*lst == NULL)
		{
			*lst = new;
		}
		else if ((*lst)->next == NULL)
			(*lst)->next = new;
		else
		{
			return (ft_lstaddback(&(*lst)->next, new));
		}
	}
}
