/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasbleuse <thomasbleuse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:23:18 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/19 20:13:22 by thomasbleus      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_memcmp(void)
{
	int		ress;
	int		resm;
	int		error = 0;

	resm = ft_memcmp("hello", "hello", 5);
	ress = memcmp("hello", "hello", 5);
	if (resm != ress)
	{
		printf("error 1 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_memcmp("nope", "nopa", 3);
	ress = memcmp("nope", "nopa", 3);
	if (resm != ress)
	{
		printf("error 2 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_memcmp("", "", 0);
	ress = memcmp("", "", 0);
	if (resm != ress)
	{
		printf("error 3 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_memcmp("hello", "hello world", 6);
	ress = memcmp("hello", "hello world", 6);
	if (resm != ress)
	{
		printf("error 4 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_memcmp("hello world", "hello", 6);
	ress = memcmp("hello world", "hello", 6);
	if (resm != ress)
	{
		printf("error 5 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_memcmp("nopelol", "nopalol", 4);
	ress = memcmp("nopelol", "nopalol", 4);
	if (resm != ress)
	{
		printf("error 6 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_memcmp("nopelol", "nopalol", 7);
	ress = memcmp("nopelol", "nopalol", 7);
	if (resm != ress)
	{
		printf("error 7 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_memcmp("nopalol", "nopelol", 4);
	ress = memcmp("nopalol", "nopelol", 4);
	if (resm != ress)
	{
		printf("error 8 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_memcmp("nopalol", "nopelol", 7);
	ress = memcmp("noapalol", "nopelol", 7);
	if (resm != ress)
	{
		printf("error 9 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_memcmp("dw", "dqwdwdwq", 5);
	ress = memcmp("dw", "dqwdwdwq", 5);
	if (resm != ress)
	{
		printf("error 10 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_memcmp("dqwdwq", "dw", 6);
	ress = memcmp("dqwdwq", "dw", 6);
	if (resm != ress)
	{
		printf("error 11 memcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	ft_memcmp(NULL, "seg", 10);
	ft_memcmp("seg", NULL, 10);
	ft_memcmp(NULL, NULL, 10);
	printf("memcmp  test end %d error detected\n", error);
}
