/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 15:10:07 by mdeken            #+#    #+#             */
/*   Updated: 2016/10/23 17:30:37 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	ft_lstdel_str is a function that free the content of a t_list node
**	It is designed to work with a char * content
**	It must be used with ft_lstdel :
**	ft_lstdel(lst, ft_lstdel_str);
*/

void	ft_lstdel_str(void *content, size_t size)
{
	if (content != NULL)
		free(content);
	content = NULL;
	size = 0;
}
