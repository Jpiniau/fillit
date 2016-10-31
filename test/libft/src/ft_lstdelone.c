/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:55:38 by mdeken            #+#    #+#             */
/*   Updated: 2014/11/12 11:28:11 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst != NULL && del != NULL && *alst != NULL)
	{
		(*del)((*alst)->content, (*alst)->content_size);
		(*alst)->content = NULL;
		(*alst)->content_size = 0;
		free(*alst);
		*alst = NULL;
	}
}
