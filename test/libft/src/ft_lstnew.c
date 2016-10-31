/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:43:51 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:20:50 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	ft_lstnew creates a new t_list node which is returned
**	If an error occurs the function returns NULL
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (elem != NULL)
	{
		if (content == NULL)
		{
			elem->content_size = 0;
			elem->content = NULL;
		}
		else
		{
			elem->content = (void *)malloc(content_size);
			if (elem->content)
				elem->content = ft_memcpy(elem->content, content, content_size);
			elem->content_size = content_size;
			elem->next = NULL;
		}
	}
	return (elem);
}
