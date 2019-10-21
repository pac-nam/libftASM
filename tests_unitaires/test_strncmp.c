/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:23:18 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/21 12:33:26 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_strncmp(void)
{
	int		ress;
	int		resm;
	int		error = 0;

	resm = ft_strncmp("hello", "hello", 8);
	ress = strncmp("hello", "hello", 8);
	if (resm != ress)
	{
		printf("error 1 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("nope", "nopa", 3);
	ress = strncmp("nope", "nopa", 3);
	if (resm != ress)
	{
		printf("error 2 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("", "", 3);
	ress = strncmp("", "", 3);
	if (resm != ress)
	{
		printf("error 3 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("hello", "hello world", 6);
	ress = strncmp("hello", "hello world", 6);
	if (resm != ress)
	{
		printf("error 4 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("hello world", "hello", 6);
	ress = strncmp("hello world", "hello", 6);
	if (resm != ress)
	{
		printf("error 5 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("nopelol", "nopalol", 4);
	ress = strncmp("nopelol", "nopalol", 4);
	if (resm != ress)
	{
		printf("error 6 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("nopelol", "nopalol", 7);
	ress = strncmp("nopelol", "nopalol", 7);
	if (resm != ress)
	{
		printf("error 7 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("nopalol", "nopelol", 3);
	ress = strncmp("nopalol", "nopelol", 3);
	if (resm != ress)
	{
		printf("error 8 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("nopalol", "nopelol", 7);
	ress = strncmp("noapalol", "nopelol", 7);
	if (resm != ress)
	{
		printf("error 9 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("dw", "dqwdwdwq", 5);
	ress = strncmp("dw", "dqwdwdwq", 5);
	if (resm != ress)
	{
		printf("error 10 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("dqwdwq", "dw", 6);
	ress = strncmp("dqwdwq", "dw", 6);
	if (resm != ress)
	{
		printf("error 11 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("hel", "hello", 3);
	ress = strncmp("hel", "hello", 3);
	if (resm != ress)
	{
		printf("error 12 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("hel", "hello", 4);
	ress = strncmp("hel", "hello", 4);
	if (resm != ress)
	{
		printf("error 13 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strncmp("hel", "hello", 5);
	ress = strncmp("hel", "hello", 5);
	if (resm != ress)
	{
		printf("error 14 strncmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	ft_strncmp(NULL, "seg", 10);
	ft_strncmp("seg", NULL, 10);
	ft_strncmp(NULL, NULL, 10);
	printf("strncmp test end %d error detected\n", error);
}
