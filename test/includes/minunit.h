/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 15:27:37 by mdeken            #+#    #+#             */
/*   Updated: 2016/10/23 14:51:26 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Framework used is minunit.
*/

#ifndef MINUNIT_H
# define MINUNIT_H

#include <libft.h>
#include "tests.h"
#include <stdio.h>

# define	mu_assert(message, test) do { if (!(test)) return message; } while (0)
# define	mu_run_test(test) printf("\033[34m" #test "\033[0m\t:\t"); \
	do { char *message = test(); tests_run++; \
		if (message) printf("[\033[31m%s\033[0m]\n", message); else printf("[ \033[32mOK\033[0m ]\n");} while (0)

#endif
