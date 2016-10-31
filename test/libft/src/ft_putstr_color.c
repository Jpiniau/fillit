/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 16:00:41 by mdeken            #+#    #+#             */
/*   Updated: 2016/10/19 15:33:51 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "colors.h"

/*
**	ft_putstr_color display a string s in color
**	colors available can be find in include/colors.h
**	If NULL is specified for bold_type or color or background it will disable
**	the effect.
**	If anything besides NULL or values defined in colors.h is specified, it will
**	be displayed as a regular string
*/

void	ft_putstr_color(char const *s, char const *bold_type, char const *color,
			char const *background)
{
	if (bold_type != NULL)
		ft_putstr(bold_type);
	if (color != NULL)
		ft_putstr(color);
	if (background != NULL)
		ft_putstr(background);
	ft_putstr(s);
	ft_putstr(END_COLOR);
}
