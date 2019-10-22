/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 09:59:01 by thomasbleus       #+#    #+#             */
/*   Updated: 2019/10/22 09:12:38 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_strrchr(void)
{
	void	*resm;
	int		error = 0;

	resm = ft_strrchr("hello", 'a');
	if (resm != NULL)
	{
		printf("error 1 strrchr:sys %p != mine %p\n", NULL, resm);
		++error;
	}
	resm = ft_strrchr("hello", 'o');
	if (resm != &("hello"[4]))
	{
		printf("error 2 strrchr:sys %p != mine %p\n", &("hello"[4]), resm);
		++error;
	}
	resm = ft_strrchr("hello", 'h');
	if (resm != &("hello"[0]))
	{
		printf("error 3 strrchr:sys %p != mine %p\n", &("hello"[0]), resm);
		++error;
	}
	resm = ft_strrchr("hello", 'l');
	if (resm != &("hello"[3]))
	{
		printf("error 4 strrchr:sys %p != mine %p\n", &("hello"[3]), resm);
		++error;
	}
	resm = ft_strrchr("hello world", 'o');
	if (resm != &("hello world"[7]))
	{
		printf("error 5 strrchr:sys %p != mine %p\n", &("hello world"[7]), resm);
		++error;
	}
	resm = ft_strrchr("", '\0');
	if (resm != &(""))
	{
		printf("error 6 strrchr:sys %p != mine %p\n", &(""), resm);
		++error;
	}
	resm = ft_strrchr("hello", '\0');
	if (resm != &("hello"[5]))
	{
		printf("error 7 strrchr:sys %p != mine %p\n", &("hello"[5]), resm);
		++error;
	}
	resm = ft_strrchr(NULL, 'x');
    if (resm)
	{
		printf("error 8 strrchr:address %p should be NULL\n", resm);
		++error;
	}
	printf("strrchr test end %d error detected\n", error);
    if (error > 0)
        printf("address of \"hello\": %p\n", "hello");
}
