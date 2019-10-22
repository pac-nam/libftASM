/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:30:52 by thomasbleus       #+#    #+#             */
/*   Updated: 2019/10/22 09:13:01 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_strnequ(void)
{
	int		resm;
	int		error = 0;

	resm = ft_strnequ("hello", "hello", 6);
	if (resm != 1)
	{
		printf("error 1 strnequ:sys %d != mine %d\n", 1, resm);
		++error;
	}
	resm = ft_strnequ("nope", "nopa", 3);
	if (resm != 1)
	{
		printf("error 2 strnequ:sys %d != mine %d\n", 1, resm);
		++error;
	}
	resm = ft_strnequ("", "", 3);
	if (resm != 1)
	{
		printf("error 3 strnequ:sys %d != mine %d\n", 1, resm);
		++error;
	}
	resm = ft_strnequ("hello", "hello world", 6);
	if (resm != 0)
	{
		printf("error 4 strnequ:sys %d != mine %d\n", 0, resm);
		++error;
	}
	resm = ft_strnequ("hello world", "helloa", 6);
	if (resm != 0)
	{
		printf("error 5 strnequ:sys %d != mine %d\n", 0, resm);
		++error;
	}
	resm = ft_strnequ("hello world", "hell", 6);
	if (resm != 0)
	{
		printf("error 5 strnequ:sys %d != mine %d\n", 0, resm);
		++error;
	}
	resm = ft_strnequ("hello world", "hell", 4);
	if (resm != 1)
	{
		printf("error 6 strnequ:sys %d != mine %d\n", 1, resm);
		++error;
	}
	resm = ft_strnequ("hello world", "hell", 5);
	if (resm != 0)
	{
		printf("error 7 strnequ:sys %d != mine %d\n", 0, resm);
		++error;
	}
	resm = ft_strnequ("hello world", "hell", 6);
	if (resm != 0)
	{
		printf("error 8 strnequ:sys %d != mine %d\n", 0, resm);
		++error;
	}
	resm = ft_strnequ("hel", "hello", 3);
	if (resm != 1)
	{
		printf("error 9 strnequ:sys %d != mine %d\n", 1, resm);
		++error;
	}
	ft_strnequ(NULL, "seg", 0);
	ft_strnequ("seg", NULL, 8);
	ft_strnequ(NULL, NULL, 31);
	printf("strnequ test end %d error detected\n", error);
}
