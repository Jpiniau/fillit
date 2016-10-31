/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:19:51 by mdeken            #+#    #+#             */
/*   Updated: 2016/09/06 15:56:04 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_strcat concat the string 's2' to the string 's1'
**	's1' must have sufficient space to hold the result
**	It returns the pointer 's1'
*/

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	while (*s2 != '\0')
	{
		s1[i] = *s2++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
