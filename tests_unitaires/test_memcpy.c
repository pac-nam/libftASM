/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:23:18 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/22 09:12:17 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_memcpy(void)
{
	char	mine[6];
	char	sys[6];
	char	*ress;
	char	*resm;
	int		error = 0;

	ft_bzero(&(mine[0]), 6);
	ft_bzero(&(sys[0]), 6);
	resm = ft_memcpy(&(mine[0]), "", 0);
	ress = memcpy(&(sys[0]), "", 0);
	if (strcmp(sys, mine))
	{
		printf("error 1 memcpy:sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	if (strcmp(resm, ress))
	{
		printf("error 2 memcpy: sys |%s| != mine |%s|\n", ress, resm);
		++error;
	}
	resm = ft_memcpy(&(mine[0]), "abc", 0);
	ress = memcpy(&(sys[0]), "abc", 0);
	if (strcmp(sys, mine))
	{
		printf("error 3 memcpy:sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	if (strcmp(resm, ress))
	{
		printf("error 4 memcpy: sys |%s| != mine |%s|\n", ress, resm);
		++error;
	}
	resm = ft_memcpy(&(mine[0]), "", 0);
	ress = memcpy(&(sys[0]), "", 0);
	if (strcmp(sys, mine))
	{
		printf("error 5 memcpy:sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	if (strcmp(resm, ress))
	{
		printf("error 6 memcpy: sys |%s| != mine |%s|\n", ress, resm);
		++error;
	}
	resm = ft_memcpy(&(mine[0]), "hello world", 5);
	ress = memcpy(&(sys[0]), "hello world", 5);
	if (strcmp(sys, mine))
	{
		printf("error 7 memcpy:sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	if (strcmp(resm, ress))
	{
		printf("error 8 memcpy: sys |%s| != mine |%s|\n", ress, resm);
		++error;
	}
	ft_memcpy(NULL, &(mine[0]), 10);
	ft_memcpy(&(mine[0]), NULL, 10);
	ft_memcpy(NULL, NULL, 10);
	printf("memcpy  test end %d error detected\n", error);
}
