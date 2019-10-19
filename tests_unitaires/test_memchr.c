/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasbleuse <thomasbleuse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 09:59:01 by thomasbleus       #+#    #+#             */
/*   Updated: 2019/10/19 17:31:56 by thomasbleus      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_memchr(void)
{
	void	*ress;
	void	*resm;
	int		error = 0;

	resm = ft_memchr("hello", 'a', 6);
	ress = memchr("hello", 'a', 6);
	if (resm != ress)
	{
		printf("error 1 memchr:sys %p != mine %p\n", "hello", resm);
		++error;
	}
	resm = ft_memchr("hello", 'o', 4);
	ress = memchr("hello", 'o', 4);
	if (resm != ress)
	{
		printf("error 2 memchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memchr("hello", 'o', 5);
	ress = memchr("hello", 'o', 5);
	if (resm != ress)
	{
		printf("error 3 memchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memchr("hello", 'l', 5);
	ress = memchr("hello", 'l', 5);
	if (resm != ress)
	{
		printf("error 4 memchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memchr("hello world", 'w', 10);
	ress = memchr("hello world", 'w', 10);
	if (resm != ress)
	{
		printf("error 5 memchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memchr("", '\0', 1);
	ress = memchr("", '\0', 1);
	if (resm != ress)
	{
		printf("error 6 memchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memchr("", '\0', 0);
	ress = memchr("", '\0', 0);
	if (resm != ress)
	{
		printf("error 7 memchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memchr(NULL, 'x', 10);
    if (resm)
	{
		printf("error 8 memchr:address %p should be NULL\n", resm);
		++error;
	}
	resm = ft_memchr(NULL, 'x', 0);
    if (resm)
	{
		printf("error 9 memchr:address %p should be NULL\n", resm);
		++error;
	}
	printf("memchr  test end %d error detected\n", error);
    if (error > 0)
        printf("address of \"hello\": %p\n", "hello");
}
