/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:06:37 by mdeken            #+#    #+#             */
/*   Updated: 2014/11/12 11:27:13 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *first;
	t_list *tmp;

	if (alst != NULL && del != NULL)
	{
		first = *alst;
		while (first)
		{
			tmp = first->next;
			(*del)(first->content, first->content_size);
			free(first);
			first = tmp;
		}
		*alst = NULL;
	}
}
