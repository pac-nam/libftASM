/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:30:52 by thomasbleus       #+#    #+#             */
/*   Updated: 2019/10/22 09:12:57 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_strequ(void)
{
	int		resm;
	int		error = 0;

	resm = ft_strequ("hello", "hello");
	if (resm != 1)
	{
		printf("error 1 strequ:sys %d != mine %d\n", 1, resm);
		++error;
	}
	resm = ft_strequ("nope", "nopa");
	if (resm != 0)
	{
		printf("error 2 strequ:sys %d != mine %d\n", 0, resm);
		++error;
	}
	resm = ft_strequ("", "");
	if (resm != 1)
	{
		printf("error 3 strequ:sys %d != mine %d\n", 1, resm);
		++error;
	}
	resm = ft_strequ("hello", "hello world");
	if (resm != 0)
	{
		printf("error 4 strequ:sys %d != mine %d\n", 0, resm);
		++error;
	}
	resm = ft_strequ("hello world", "helloa");
	if (resm != 0)
	{
		printf("error 5 strequ:sys %d != mine %d\n", 0, resm);
		++error;
	}
	ft_strequ(NULL, "seg");
	ft_strequ("seg", NULL);
	ft_strequ(NULL, NULL);
	printf("strequ  test end %d error detected\n", error);
}
