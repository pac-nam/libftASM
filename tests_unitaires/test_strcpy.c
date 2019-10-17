/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:26:36 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 17:12:49 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_strcpy(void)
{
	char	mine[6];
	char	sys[6];
	char	*tmp;
	char	*tmp2;
	int		error = 0;

	tmp = ft_strcpy(&(mine[0]), "");
	tmp2 = strcpy(&(sys[0]), "");
	if (strcmp(sys, mine))
	{
		printf("error 1 strcpy: sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	if (strcmp(tmp, tmp2))
	{
		printf("error 2 strcpy: sys |%s| != mine |%s|\n", tmp2, tmp);
		++error;
	}
	ft_strcpy(&(mine[0]), "hello");
	strcpy(&(sys[0]), "hello");
	if (strcmp(sys, mine))
	{
		printf("error 3 strcpy: sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	tmp = ft_strcpy(&(mine[0]), "yo");
	tmp2 = strcpy(&(sys[0]), "yo");
	if (strcmp(sys, mine))
	{
		printf("error 4 strcpy: sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	if (strcmp(tmp, tmp2))
	{
		printf("error 5 strcpy: sys |%s| != mine |%s|\n", tmp2, tmp);
		++error;
	}
	tmp = ft_strcpy(&(mine[0]), "");
	tmp2 = strcpy(&(sys[0]), "");
	if (strcmp(sys, mine))
	{
		printf("error 6 strcpy: sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	if (strcmp(tmp, tmp2))
	{
		printf("error 7 strcpy: sys |%s| != mine |%s|\n", tmp2, tmp);
		++error;
	}
	tmp = ft_strcpy(NULL, "seg");
	if (tmp)
	{
		printf("error 8 strcpy: should return NULL\n");
		++error;
	}
	tmp = ft_strcpy(&(mine[0]), NULL);
	if (tmp != mine)
	{
		printf("error 9 strcpy: wrong address %p should be %p\n", tmp, mine);
		++error;
	}
	tmp = ft_strcpy(NULL, NULL);
	if (tmp)
	{
		printf("error 10 strcpy: should return NULL\n");
		++error;
	}
	printf("strcpy  test end %d error detected\n", error);
}