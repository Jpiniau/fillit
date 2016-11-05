/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 12:09:10 by jpiniau           #+#    #+#             */
/*   Updated: 2016/11/05 14:27:22 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include "tetri.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void	lst_print(t_list *elem)
{
	t_tetri	*tetri;
	int		i;
	int		j;

	tetri = (t_tetri *)elem->content;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			ft_putchar(tetri->tetri[i][j]);
		ft_putchar('\n');
	}
	ft_putchar('\n');
}

void	free_lst(void *content, size_t i)
{
	t_tetri	*tetri;

	(void)i;
	tetri = (t_tetri *)content;
	free_tetri(tetri->tetri);
	free(tetri);
	tetri = NULL;
}

int		main(int ac, char **av)
{
	t_list	*tetri;

	(void)ac;
	(void)av;
	ft_putstr("TEST\n");
	tetri = get_all_tetri(av[1]);
	ft_lstiter(tetri, lst_print);
	ft_lstdel(&tetri, free_lst_tetri);
	ft_putstr("Retrun\n");
	put_rep(tetri);
	while(1);
	return (0);
}
