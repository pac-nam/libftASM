/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 09:59:01 by thomasbleus       #+#    #+#             */
/*   Updated: 2019/10/21 08:08:58 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_strnchr(void)
{
	void	*ress;
	void	*resm;
	int		error = 0;

	resm = ft_strnchr("hello", 'a', 6);
	ress = memchr("hello", 'a', 6);
	if (resm != ress)
	{
		printf("error 1 strnchr:sys %p != mine %p\n", "hello", resm);
		++error;
	}
	resm = ft_strnchr("hello", 'o', 4);
	ress = memchr("hello", 'o', 4);
	if (resm != ress)
	{
		printf("error 2 strnchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strnchr("hello", 'o', 5);
	ress = memchr("hello", 'o', 5);
	if (resm != ress)
	{
		printf("error 3 strnchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strnchr("hello", 'o', 6);
	ress = memchr("hello", 'o', 6);
	if (resm != ress)
	{
		printf("error 4 strnchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strnchr("hello", 'o', 7);
	ress = memchr("hello", 'o', 6);
	if (resm != ress)
	{
		printf("error 5 strnchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strnchr("hello", 'l', 5);
	ress = memchr("hello", 'l', 5);
	if (resm != ress)
	{
		printf("error 6 strnchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strnchr("hello world", 'w', 10);
	ress = memchr("hello world", 'w', 10);
	if (resm != ress)
	{
		printf("error 7 strnchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strnchr("", '\0', 1);
	ress = memchr("", '\0', 1);
	if (resm != ress)
	{
		printf("error 8 strnchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strnchr("", '\0', 0);
	ress = memchr("", '\0', 0);
	if (resm != ress)
	{
		printf("error 9 strnchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strnchr(NULL, 'x', 10);
    if (resm)
	{
		printf("error 10 strnchr:address %p should be NULL\n", resm);
		++error;
	}
	resm = ft_strnchr(NULL, 'x', 0);
    if (resm)
	{
		printf("error 11 strnchr:address %p should be NULL\n", resm);
		++error;
	}
	printf("strnchr test end %d error detected\n", error);
    if (error > 0)
        printf("address of \"hello\": %p\n", "hello");
}
