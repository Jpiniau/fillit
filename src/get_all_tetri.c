/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_all_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 14:02:52 by mdeken            #+#    #+#             */
/*   Updated: 2016/10/31 14:44:51 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static t_list	*create_tetri(int fd)
{
	t_list	*new_tetri;
	char	**tetri;

	tetri = get_tetri(fd);
	new_tetri = NULL;
	if (tetri != NULL)
		new_tetri = ft_lstnew(tetri, sizeof(char **) * 4);
	return (new_tetri);
}

t_list	*get_all_tetri(char *path)
{
	int		fd;
	char	line[5];
	t_list	*all_tetri;


	all_tetri = NULL;
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		ft_putendl("error");
		exit(-1);
	}
		
}
