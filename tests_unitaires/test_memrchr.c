/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 09:59:01 by thomasbleus       #+#    #+#             */
/*   Updated: 2019/10/20 13:20:34 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_memrchr(void)
{
	void	*ress;
	void	*resm;
	int		error = 0;

	resm = ft_memrchr("hello", 'a', 6);
	if (resm != NULL)
	{
		printf("error 1 memrchr:sys %p != mine %p\n", NULL, resm);
		++error;
	}
	resm = ft_memrchr("hello", 'o', 4);
	if (resm != NULL)
	{
		printf("error 2 memrchr:sys %p != mine %p\n", NULL, resm);
		++error;
	}
	resm = ft_memrchr("hello", 'o', 5);
	if (resm != &("hello"[4]))
	{
		printf("error 3 memrchr:sys %p != mine %p\n", &("hello"[4]), resm);
		++error;
	}
	resm = ft_memrchr("hello", 'l', 5);
	if (resm != &("hello"[3]))
	{
		printf("error 4 memrchr:sys %p != mine %p\n", &("hello"[3]), resm);
		++error;
	}
	resm = ft_memrchr("hello world", 'o', 10);
	if (resm != &("hello world"[7]))
	{
		printf("error 5 memrchr:sys %p != mine %p\n", &("hello world"[7]), resm);
		++error;
	}
	resm = ft_memrchr("", '\0', 1);
	if (resm != &(""))
	{
		printf("error 6 memrchr:sys %p != mine %p\n", &(""), resm);
		++error;
	}
	resm = ft_memrchr("", '\0', 0);
	if (resm != NULL)
	{
		printf("error 7 memrchr:sys %p != mine %p\n", NULL, resm);
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
