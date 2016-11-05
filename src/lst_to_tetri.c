/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_to_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:28:41 by jpiniau           #+#    #+#             */
/*   Updated: 2016/11/05 17:56:35 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetri.h"
#include "libft.h"

t_tetri	*lst_to_tetri(t_list *lst)
{
	t_tetri	*tetri;
	int		size_lst;
	int		i;

	size_lst = ft_lstlen(lst);
	if(!(tetri = (t_tetri *)malloc(sizeof(t_tetri) * size_lst)))
		return (NULL);
	i = -1;
	while (lst != NULL && ++i < size_lst)
	{
		tetri[i] = ft_memcpy(tetri[i], lst->content, sizeof(t_tetri));
		lst = lst->next;
	}
	return (tetri);
}
