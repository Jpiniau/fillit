/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:17:47 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 16:09:57 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	ft_strjoin returns a copy of the concatenation of 's1' and 's2'
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;
	size_t	i;

	str = NULL;
	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(size + 1 * sizeof(char));
	if (str != NULL)
	{
		ft_strclr(str);
		while (*s1 != '\0' && s1)
			str[i++] = *(s1++);
		while (*s2 != '\0' && s2)
			str[i++] = *(s2++);
		str[i] = '\0';
	}
	return (str);
}
