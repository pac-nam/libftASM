/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:23:18 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/18 16:49:10 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_memcmp(void)
{
	int		ress;
	int		resm;
	int		error = 0;

	// write(1, "1\n", 2);
	resm = ft_memcmp("hello", "hello", 5);
	// write(1, "2\n", 2);
	ress = memcmp("hello", "hello", 5);
	// write(1, "3\n", 2);
	if (resm != ress)
	{
		printf("error 1 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	// write(1, "4\n", 2);
	resm = ft_memcmp("nope", "nopa", 3);
	// write(1, "5\n", 2);
	ress = memcmp("nope", "nopa", 3);
	// write(1, "6\n", 2);
	if (resm != ress)
	{
		printf("error 2 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	// write(1, "7\n", 2);
	resm = ft_memcmp("", "", 0);
	// write(1, "8\n", 2);
	ress = memcmp("", "", 0);
	// write(1, "9\n", 2);
	if (resm != ress)
	{
		printf("error 3 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	// write(1, "10\n", 3);
	resm = ft_memcmp("hello", "hello world", 6);
	// write(1, "11\n", 3);
	ress = memcmp("hello", "hello world", 6);
	// write(1, "12\n", 3);
	if (resm != ress)
	{
		printf("error 4 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	// write(1, "13\n", 3);
	ft_memcmp(NULL, "seg", 10);
	// write(1, "14\n", 3);
	ft_memcmp("seg", NULL, 10);
	// write(1, "15\n", 3);
	ft_memcmp(NULL, NULL, 10);
	printf("memcpy  test end %d error detected\n", error);
}
