/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 12:09:10 by jpiniau           #+#    #+#             */
/*   Updated: 2016/10/31 18:37:13 by mdeken           ###   ########.fr       */
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
	char	**tetri;
	int		i;
	int		j;

	tetri = (char **)elem->content;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(tetri[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int		i;
	t_list	*tetri;

	(void)ac;
	i = -1;
	ft_putstr("TEST\n");
	tetri = get_all_tetri(av[1]);
	ft_lstiter(tetri, lst_print);
	return (0);
}
