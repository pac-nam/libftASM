/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:03:21 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/21 13:46:44 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftasm.h"

void		ft_test_strstr(void)
{
	char	*ress;
	char	*resm;
	int		error = 0;

	resm = ft_strstr("hello", "lo");
	ress = strstr("hello", "lo");
	if (resm != ress)
	{
		printf("error 1 strstr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strstr("hello", "loa");
	ress = strstr("hello", "loa");
	if (resm != ress)
	{
		printf("error 2 strstr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strstr("hello world", "lo");
	ress = strstr("hello world", "lo");
	if (resm != ress)
	{
		printf("error 3 strstr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strstr("hello", "");
	ress = strstr("hello", "");
	if (resm != ress)
	{
		printf("error 4 strstr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strstr("hello", "world");
	ress = strstr("hello", "world");
	if (resm != ress)
	{
		printf("error 5 strstr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strstr("hellolololo", "lo");
	ress = strstr("hellolololo", "lo");
	if (resm != ress)
	{
		printf("error 6 strstr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strstr("hello", "hello");
	ress = strstr("hello", "hello");
	if (resm != ress)
	{
		printf("error 7 strstr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strstr("hello", "h");
	ress = strstr("hello", "h");
	if (resm != ress)
	{
		printf("error 8 strstr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strstr("hello", "ll");
	ress = strstr("hello", "ll");
	if (resm != ress)
	{
		printf("error 9 strstr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strstr("", "");
	ress = strstr("", "");
	if (resm != ress)
	{
		printf("error 10 strstr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strstr("", "ll");
	ress = strstr("", "ll");
	if (resm != ress)
	{
		printf("error 11 strstr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	printf("strstr  test end %d error detected\n", error);
}