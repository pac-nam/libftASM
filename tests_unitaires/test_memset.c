/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:24:12 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 16:58:19 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_memset()
{
	char		tab[6];
	char		*res;
	int			error = 0;

	tab[5] = '\0';
	res = ft_memset(&(tab[0]), 'a', 5);
	if (strcmp(tab, "aaaaa"))
	{
		printf("error 1 memset :%s != %s\n", tab, "aaaaa");
		++error;
	}
	if (strcmp(res, "aaaaa"))
	{
		printf("error 2 memset :%s != %s\n", res, "aaaaa");
		++error;
	}
	res = ft_memset(&(tab[0]), 'c', 0);
	if (strcmp(tab, "aaaaa"))
	{
		printf("error 3 memset :%s != %s\n", tab, "aaaaa");
		++error;
	}
	if (strcmp(tab, "aaaaa"))
	{
		printf("error 4 memset :%s != %s\n", tab, "aaaaa");
		++error;
	}
	res = ft_memset(NULL, ' ', 10);
	printf("memset  test end %d error detected\n", error);
}
