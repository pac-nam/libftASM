/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasbleuse <thomasbleuse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:30:52 by thomasbleus       #+#    #+#             */
/*   Updated: 2019/10/19 18:41:41 by thomasbleus      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_strcmp(void)
{
	int		ress;
	int		resm;
	int		error = 0;

	resm = ft_strcmp("hello", "hello");
	ress = strcmp("hello", "hello");
	if (resm != ress)
	{
		printf("error 1 strcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strcmp("nope", "nopa");
	ress = strcmp("nope", "nopa");
	if (resm != ress)
	{
		printf("error 2 strcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strcmp("", "");
	ress = strcmp("", "");
	if (resm != ress)
	{
		printf("error 3 strcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strcmp("hello", "hello world");
	ress = strcmp("hello", "hello world");
	if (resm != ress)
	{
		printf("error 4 strcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	resm = ft_strcmp("hello world", "helloa");
	ress = strcmp("hello world", "helloa");
	if (resm != ress)
	{
		printf("error 5 strcmp:sys %d != mine %d\n", ress, resm);
		++error;
	}
	ft_strcmp(NULL, "seg");
	ft_strcmp("seg", NULL);
	ft_strcmp(NULL, NULL);
	printf("strcmp  test end %d error detected\n", error);
}
