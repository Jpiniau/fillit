/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstorder_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 16:34:10 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/20 16:41:06 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_lstorder_str is a function that can be used with ft_lstaddorderby
**	It allows a t_list node with a char * content to be sort by ft_strcmp
**
**	Exemple : ft_lstaddorderby(&lst, new, ft_lstorder_str, 1) -> this will add
**			  the new node in the appropriate place in lst by alphabetic order
*/

int	ft_lstorder_str(t_list *lst1, t_list *lst2)
{
	char	*str1;
	char	*str2;

	str1 = (char *)lst1->content;
	str2 = (char *)lst2->content;
	return (ft_strcmp(str1, str2));
}
