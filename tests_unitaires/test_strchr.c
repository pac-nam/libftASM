/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasbleuse <thomasbleuse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 09:59:01 by thomasbleus       #+#    #+#             */
/*   Updated: 2019/10/19 17:15:55 by thomasbleus      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_strchr(void)
{
	void	*ress;
	void	*resm;
	int		error = 0;

	resm = ft_strchr("hello", 'a');
	ress = strchr("hello", 'a');
	if (resm != ress)
	{
		printf("error 1 strchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strchr("hellola", 'l');
	ress = strchr("hellola", 'l');
	if (resm != ress)
	{
		printf("error 2 strchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strchr("hello", '\0');
	ress = strchr("hello", '\0');
	if (resm != ress)
	{
		printf("error 3 strchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strchr("", '\0');
	ress = strchr("", '\0');
	if (resm != ress)
	{
		printf("error 4 strchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strchr("", 'a');
	ress = strchr("", 'a');
	if (resm != ress)
	{
		printf("error 5 strchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	resm = ft_strchr(NULL, 'x');
    if (resm)
	{
		printf("error 6 strchr:address %p should be NULL\n", resm);
		++error;
	}
	resm = ft_strchr(NULL, '\0');
    if (resm)
	{
		printf("error 7 strchr:address %p should be NULL\n", resm);
		++error;
	}
	resm = ft_strchr("hello world", 'w');
	ress = strchr("hello world", 'w');
	if (resm != ress)
	{
		printf("error 8 strchr:sys %p != mine %p\n", ress, resm);
		++error;
	}
	printf("strchr  test end %d error detected\n", error);
}
