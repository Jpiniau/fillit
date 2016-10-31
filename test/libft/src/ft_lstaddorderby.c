/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddorderby.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:58:54 by mdeken            #+#    #+#             */
/*   Updated: 2016/10/17 18:48:51 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddorderby(t_list **lst, t_list *new,
		int (*order)(t_list *, t_list *), int desc)
{
	t_list	*current;

	if (*order == NULL || new == NULL || desc == 0)
		ft_lstaddback(lst, new);
	else if (*lst == NULL || (*order)(new, *lst) == desc)
	{
		new->next = *lst;
		*lst = new;
	}
	else
	{
		current = *lst;
		while (current->next != NULL &&
				(*order)(current->next, new) == desc)
			current = current->next;
		new->next = current->next;
		current->next = new;
	}
}
