/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasbleuse <thomasbleuse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 09:59:01 by thomasbleus       #+#    #+#             */
/*   Updated: 2019/10/20 09:12:05 by thomasbleus      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_memrchr(void)
{
	void	*ress;
	void	*resm;
	int		error = 0;

	resm = ft_memrchr("hello", 'a', 6);
	ress = memrchr("hello", 'a', 6);
	if (resm != ress)
	{
		printf("error 1 memrchr:sys %p != mine %p\n", "hello", resm);
		++error;
	}
	resm = ft_memrchr("hello", 'o', 4);
	ress = memrchr("hello", 'o', 4);
	if (resm != ress)
	{
		printf("error 2 memrchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memrchr("hello", 'o', 5);
	ress = memrchr("hello", 'o', 5);
	if (resm != ress)
	{
		printf("error 3 memrchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memrchr("hello", 'l', 5);
	ress = memrchr("hello", 'l', 5);
	if (resm != ress)
	{
		printf("error 4 memrchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memrchr("hello world", 'o', 10);
	ress = memrchr("hello world", 'o', 10);
	if (resm != ress)
	{
		printf("error 5 memrchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memrchr("", '\0', 1);
	ress = memrchr("", '\0', 1);
	if (resm != ress)
	{
		printf("error 6 memrchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memrchr("", '\0', 0);
	ress = memrchr("", '\0', 0);
	if (resm != ress)
	{
		printf("error 7 memrchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_memrchr(NULL, 'x', 10);
    if (resm)
	{
		printf("error 8 memrchr:address %p should be NULL\n", resm);
		++error;
	}
	resm = ft_memrchr(NULL, 'x', 0);
    if (resm)
	{
		printf("error 9 memrchr:address %p should be NULL\n", resm);
		++error;
	}
	printf("memrchr test end %d error detected\n", error);
    if (error > 0)
        printf("address of \"hello\": %p\n", "hello");
}
