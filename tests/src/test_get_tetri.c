/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:38:23 by mdeken            #+#    #+#             */
/*   Updated: 2016/11/05 12:35:32 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "tetri.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

static void	free_test(char **test)
{
	free(test[0]);
	free(test[1]);
	free(test[2]);
	free(test[3]);
}

static int	test_value(char **test_tetri, char **returned_tetri)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (test_tetri[i][j] != returned_tetri[i][j])
				return (0);
			j++;
		}
		i++;
	}
	free_tetri(returned_tetri);
	free_test(test_tetri);
	return (1);
}


char	*test_get_tetri()
{
	char	*test_tetri[4];
	char	**returned_tetri;
	int		fd;

	fd = open("map/tetri1", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup("...#");
	test_tetri[1] = strdup("...#");
	test_tetri[2] = strdup("...#");
	test_tetri[3] = strdup("...#");
	close(fd);
	mu_assert("get_tetri : failed tetri1", test_value((char **)test_tetri, returned_tetri));

	fd = open("map/tetri2", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup("####");
	test_tetri[1] = strdup("....");
	test_tetri[2] = strdup("....");
	test_tetri[3] = strdup("....");
	close(fd);
	mu_assert("get_tetri : failed tetri2", test_value((char **)test_tetri, returned_tetri));

	fd = open("map/tetri3", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup("#...");
	test_tetri[1] = strdup("#...");
	test_tetri[2] = strdup("#...");
	test_tetri[3] = strdup("#...");
	close(fd);
	mu_assert("get_tetri : failed tetri3", test_value((char **)test_tetri, returned_tetri));

	fd = open("map/tetri4", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup("##..");
	test_tetri[1] = strdup("#...");
	test_tetri[2] = strdup("#...");
	test_tetri[3] = strdup("....");
	close(fd);
	mu_assert("get_tetri : failed tetri4", test_value((char **)test_tetri, returned_tetri));
	
	fd = open("map/tetri5", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup("##..");
	test_tetri[1] = strdup(".##.");
	test_tetri[2] = strdup("....");
	test_tetri[3] = strdup("....");
	close(fd);
	mu_assert("get_tetri : failed tetri5", test_value((char **)test_tetri, returned_tetri));

	fd = open("map/tetri6", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup("##..");
	test_tetri[1] = strdup("##..");
	test_tetri[2] = strdup("....");
	test_tetri[3] = strdup("....");
	close(fd);
	mu_assert("get_tetri : failed tetri6", test_value((char **)test_tetri, returned_tetri));

	fd = open("map/tetri7", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	close(fd);
	mu_assert("get_tetri : failed tetri7", returned_tetri == NULL);

	fd = open("map/tetri8", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup("....");
	test_tetri[1] = strdup("....");
	test_tetri[2] = strdup("....");
	test_tetri[3] = strdup("....");
	close(fd);
	mu_assert("get_tetri : failed tetri8", test_value((char **)test_tetri, returned_tetri));
	
	fd = open("map/tetri9", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup("####");
	test_tetri[1] = strdup("####");
	test_tetri[2] = strdup("####");
	test_tetri[3] = strdup("####");
	close(fd);
	mu_assert("get_tetri : failed tetri9", test_value((char **)test_tetri, returned_tetri));

	fd = open("map/tetri10", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup(",,,,");
	test_tetri[1] = strdup("#,,,");
	test_tetri[2] = strdup("#,,,");
	test_tetri[3] = strdup("##,,");
	close(fd);
	mu_assert("get_tetri : failed tetri10", test_value((char **)test_tetri, returned_tetri));

	fd = open("map/tetri11", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup("8...");
	test_tetri[1] = strdup("8...");
	test_tetri[2] = strdup("8...");
	test_tetri[3] = strdup("8...");
	close(fd);
	mu_assert("get_tetri : failed tetri11", test_value((char **)test_tetri, returned_tetri));

	fd = open("map/tetri12", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup("#..#");
	test_tetri[1] = strdup("....");
	test_tetri[2] = strdup("....");
	test_tetri[3] = strdup("#..#");
	close(fd);
	mu_assert("get_tetri : failed tetri12", test_value((char **)test_tetri, returned_tetri));

	fd = open("map/tetri13", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	close(fd);
	mu_assert("get_tetri : failed tetri13", returned_tetri == NULL);

	fd = open("map/tetri14", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	close(fd);
	mu_assert("get_tetri : failed tetri14", returned_tetri == NULL);

	fd = open("map/tetri15", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	close(fd);
	mu_assert("get_tetri : failed tetri15", returned_tetri == NULL);

	fd = open("map/tetri16", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	test_tetri[0] = strdup("##..");
	test_tetri[1] = strdup("##..");
	test_tetri[2] = strdup("....");
	test_tetri[3] = strdup("....");
	close(fd);
	mu_assert("get_tetri : failed tetri16", test_value((char **)test_tetri, returned_tetri));
	
	fd = open("map/tetri17", O_RDONLY);
	mu_assert("wrong fd", fd > 0);
	returned_tetri = get_tetri(fd);
	close(fd);
	mu_assert("get_tetri : failed tetri17", returned_tetri == NULL);
	return (0);
}
