/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_all_tetri.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:47:23 by mdeken            #+#    #+#             */
/*   Updated: 2016/11/05 16:23:14 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "tetri.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

static int	test_error(char *test)
{
	int		ret;
	int		p[2];
	int		out;
	char	buf[100];
	t_list	*ret_test;

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ret_test = get_all_tetri(test);
	dup2(out, 1);
	ret = read(p[0], buf, 100);
	buf[ret] = '\0';
	close(p[0]);
	close(p[1]);
	close(out);
	if (strcmp(buf, "error\n") == 0 && ret_test == NULL)
		return (1);
	else
		return (0);
}

static void	quick_free(char	**tetri)
{
	free(tetri[0]);
	free(tetri[1]);
	free(tetri[2]);
	free(tetri[3]);
}

static int	cmp_tetri(t_list *lst1, t_list *lst2)
{
	t_tetri *tetri1;
	t_tetri	*tetri2;
	int		i = 0;
	int		j = 0;

	tetri1 = (t_tetri *)lst1->content;
	tetri2 = (t_tetri *)lst2->content;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetri1->tetri[i][j] != tetri2->tetri[i][j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static void	del_tetri(void *content, size_t size)
{
	t_tetri	*tetri;

	(void) size;
	tetri = (t_tetri *)content;
	free_tetri(tetri->tetri);
	free(tetri);
	tetri = NULL;
}

static int	test_lst(t_list *lst1, t_list *lst2)
{
	int	result;

	result = ft_lstcmp(lst1, lst2, cmp_tetri);
	ft_lstdel(&lst1, del_tetri);
	ft_lstdel(&lst2, del_tetri);
	return (result);
}

static void	print_lst(t_list *elem)
{
	t_tetri	*tetri;

	tetri = (t_tetri *)elem->content;
	print_tetri(tetri->tetri);
}

static void	add_tetri(t_list **lst, char *tetri1, char *tetri2, char *tetri3, char *tetri4)
{
	char	**test_tetri;
	t_tetri	new;
	t_list	*node;

	test_tetri = (char **)malloc(sizeof(char *) * 4);
	test_tetri[0] = strdup(tetri1);
	test_tetri[1] = strdup(tetri2);
	test_tetri[2] = strdup(tetri3);
	test_tetri[3] = strdup(tetri4);
	new.tetri = test_tetri;
	new.x = 0;
	new.y = 0;
	node = ft_lstnew(&new, sizeof(t_tetri));
	ft_lstaddback(lst, node);
}

char	*test_get_all_tetri()
{
	t_list	*lst_test;
	t_list	*lst_returned;

	(void)print_lst;
	(void)quick_free;
	lst_test = NULL;
	lst_returned = NULL;
	add_tetri(&lst_test, "#...", "#...", "#...", "#...");
	lst_returned = get_all_tetri("map/tetri1");
	mu_assert("Error tetri1", test_lst(lst_test, lst_returned) == 0);

	lst_test = NULL;
	lst_returned = NULL;
	add_tetri(&lst_test, "#...", "#...", "#...", "#...");
	add_tetri(&lst_test, "####", "....", "....", "...."); 
	lst_returned = get_all_tetri("map/tetri_multi1");
	mu_assert("Error tetri_multi1", test_lst(lst_test, lst_returned) == 0);

	lst_test = NULL;
	lst_returned = NULL;
	add_tetri(&lst_test, "####", "....", "....", "....");
	lst_returned = get_all_tetri("map/tetri2");
	mu_assert("Error tetri2", test_lst(lst_test, lst_returned) == 0);

	lst_test = NULL;
	lst_returned = NULL;
	add_tetri(&lst_test, "#...", "#...", "#...", "#...");
	lst_returned = get_all_tetri("map/tetri3");
	mu_assert("Error tetri3", test_lst(lst_test, lst_returned) == 0);

	lst_test = NULL;
	lst_returned = NULL;
	add_tetri(&lst_test, "##..", "#...", "#...", "....");
	lst_returned = get_all_tetri("map/tetri4");
	mu_assert("Error tetri4", test_lst(lst_test, lst_returned) == 0);

	lst_test = NULL;
	lst_returned = NULL;
	add_tetri(&lst_test, "##..", ".##.", "....", "....");
	lst_returned = get_all_tetri("map/tetri5");
	mu_assert("Error tetri5", test_lst(lst_test, lst_returned) == 0);

	lst_test = NULL;
	lst_returned = NULL;
	add_tetri(&lst_test, "##..", "##..", "....", "....");
	lst_returned = get_all_tetri("map/tetri6");
	mu_assert("Error tetri6", test_lst(lst_test, lst_returned) == 0);

	lst_test = NULL;
	lst_returned = NULL;
	add_tetri(&lst_test, ".##.", "##..", "....", "....");
	lst_returned = get_all_tetri("map/tetri7");
	mu_assert("Error tetri7", test_lst(lst_test, lst_returned) == 0);

	lst_test = NULL;
	lst_returned = NULL;
	add_tetri(&lst_test, "##..", "##..", "....", "....");
	add_tetri(&lst_test, "##..", "##..", "....", "....");
	lst_returned = get_all_tetri("map/tetri_multi2");
	mu_assert("Error tetri_multi2", test_lst(lst_test, lst_returned) == 0);

	lst_test = NULL;
	lst_returned = NULL;
	add_tetri(&lst_test, ".##.", "##..", "....", "....");
	add_tetri(&lst_test, "#...", "#...", "#...", "#...");
	add_tetri(&lst_test, "##..", "#...", "#...", "....");
	lst_returned = get_all_tetri("map/tetri_multi3");
	mu_assert("Error tetri_multi3", test_lst(lst_test, lst_returned) == 0);

	mu_assert("Error error1", test_error("error1") == 1);
	mu_assert("Error error2", test_error("error2") == 1);
	mu_assert("Error error3", test_error("error3") == 1);
	mu_assert("Error error4", test_error("error4") == 1);
	mu_assert("Error error5", test_error("error5") == 1);
	mu_assert("Error error6", test_error("error6") == 1);
	mu_assert("Error error7", test_error("error7") == 1);
	mu_assert("Error error8", test_error("error8") == 1);
	mu_assert("Error error9", test_error("error9") == 1);
	mu_assert("Error z", test_error("z") == 1);
	return (0);
}
