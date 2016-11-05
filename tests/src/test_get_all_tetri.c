/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_all_tetri.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:47:23 by mdeken            #+#    #+#             */
/*   Updated: 2016/11/05 12:53:58 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "tetri.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/*static int	test_error(char *test)
{
	int		ret;
	int		p[2];
	int		out;
	char	buf[100];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
//	get_all_tetri("");
//	get_all_tetri("error");
	dup2(out, 1);
	ret = read(p[0], buf, 100);
	buf[ret] = '\0';
	close(p[0]);
	close(p[1]);
	close(out);
	if (strcmp(buf, test) == 0)
		return (1);
	else
		return (0);
}*/

static int	cmp_tetri(t_list *lst1, t_list *lst2)
{
	char	**tetri1;
	char	**tetri2;
	int		i;
	int		j;

	tetri1 = (char **)lst1->content;
	tetri2 = (char **)lst2->content;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetri1[i][j] != tetri2[i][j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

static void	del_tetri(void *content, size_t size)
{
	char	**tetri;
	int		i;

	(void) size;
	i = 0;
	tetri = (char **)content;
	printf("%ld\n", sizeof(t_list *));
	free_tetri(tetri);

	tetri = NULL;
}

void	lst_print(t_list *lst)
{
	char	**tetri;

	while (lst != NULL)
	{
		tetri = (char **)lst->content;
		print_tetri(tetri);
		lst = lst->next;
	}
}

char	*test_get_all_tetri()
{
	char	**test_tetri;
	t_list	*lst_test;
	t_list	*node;
	t_list	*lst_returned;

	(void)cmp_tetri;
	lst_test = NULL;
	lst_returned = NULL;
	test_tetri = (char **)malloc(sizeof(char *) * 4);
	test_tetri[0] = strdup("#...");
	test_tetri[1] = strdup("#...");
	test_tetri[2] = strdup("#...");
	test_tetri[3] = strdup("#...");
	node = ft_lstnew(test_tetri, sizeof(char **) * 4);
	ft_lstaddback(&lst_test, node);
	lst_returned = get_all_tetri("map/tetri1");
//	mu_assert("Error tetri1", ft_lstcmp(lst_test, lst_returned, cmp_tetri) == 0);
	ft_lstdel(&lst_test, del_tetri);
	ft_lstdel(&lst_returned, del_tetri);
	(void)del_tetri;
	/*lst_test = NULL;
	lst_returned = NULL;
	test_tetri = (char **)malloc(sizeof(char *) * 4);
	test_tetri[0] = strdup("#...");
	test_tetri[1] = strdup("#...");
	test_tetri[2] = strdup("#...");
	test_tetri[3] = strdup("#...");
	node = ft_lstnew(test_tetri, sizeof(char **) * 4);
	ft_lstaddback(&lst_test, node);
	test_tetri = (char **)malloc(sizeof(char *) * 4);
	test_tetri[0] = strdup("####");
	test_tetri[1] = strdup("....");
	test_tetri[2] = strdup("....");
	test_tetri[3] = strdup("....");
	node = ft_lstnew(test_tetri, sizeof(char **) * 4);
	ft_lstaddback(&lst_test, node);
	lst_returned = get_all_tetri("map/tetri_multi1");
	mu_assert("Error tetri_multi1", ft_lstcmp(lst_test, lst_returned, cmp_tetri) == 0);
	ft_lstdel(&lst_test, del_tetri);
	ft_lstdel(&lst_returned, del_tetri);*/
	while (1);
	return (0);
}
