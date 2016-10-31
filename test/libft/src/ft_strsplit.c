/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:55:28 by mdeken            #+#    #+#             */
/*   Updated: 2015/03/03 16:27:45 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_count_split(char const *s, char c)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			result++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (result);
}

static int		ft_count_c(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	return (i);
}

static int		ft_word_len(char const *s, char c)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
			{
				result++;
				i++;
			}
			return (result);
		}
	}
	return (result);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		size;
	int		size_word;

	i = 0;
	j = 0;
	(void)split;
	size_word = 0;
	if (s == NULL || c == 0)
		return (NULL);
	size = ft_count_split(s, c);
	if ((split = (char **)ft_memalloc((size + 1) * sizeof(char *))) == NULL)
		return (NULL);
	while (i < size)
	{
		j += ft_count_c(s + j, c);
		size_word = ft_word_len(s + j, c);
		split[i] = ft_strndup(s + j, size_word);
		j += size_word;
		i++;
	}
	split[size] = NULL;
	return (split);
}
