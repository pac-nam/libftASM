/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:26:02 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 17:13:02 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftasm.h"

void		ft_test_strcat(void)
{
	char	mine[13];
	char	sys[13];
	char	*tmp;
	char	*tmp2;
	int		error = 0;
	
	bzero(&(mine[0]), 10);
	bzero(&(sys[0]), 10);
	tmp = ft_strcat(&(mine[0]), "");
	tmp2 = strcat(&(sys[0]), "");
	if (strcmp(sys, mine))
	{
		printf("error 1 strcat: sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	if (strcmp(tmp2, tmp))
	{
		printf("error 2 strcat: sys |%s| != mine |%s|\n", tmp2, tmp);
		++error;
	}
	tmp = ft_strcat(&(mine[0]), "hello ");
	tmp2 = strcat(&(sys[0]), "hello ");
	if (strcmp(sys, mine))
	{
		printf("error 3 strcat: sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	if (strcmp(tmp2, tmp))
	{
		printf("error 4 strcat: sys |%s| != mine |%s|\n", tmp2, tmp);
		++error;
	}
	tmp = ft_strcat(&(mine[0]), "world");
	tmp2 = strcat(&(sys[0]), "world");
	if (strcmp(sys, mine))
	{
		printf("error 5 strcat: sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	if (strcmp(tmp2, tmp))
	{
		printf("error 6 strcat: sys |%s| != mine |%s|\n", tmp2, tmp);
		++error;
	}
	tmp = ft_strcat(&(mine[0]), "");
	tmp2 = strcat(&(sys[0]), "");
	if (strcmp(sys, mine))
	{
		printf("error 7 strcat: sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	if (strcmp(tmp2, tmp))
	{
		printf("error 8 strcat: sys |%s| != mine |%s|\n", tmp2, tmp);
		++error;
	}
	tmp = ft_strcat(NULL, "seg");
	if (tmp)
	{
		printf("error 9 strcat: should return NULL\n");
		++error;
	}
	tmp = ft_strcat(&(mine[0]), NULL);
	if (tmp != mine)
	{
		printf("error 10 strcat: wrong address %p should be %p\n", tmp, mine);
		++error;
	}
	tmp = ft_strcat(NULL, NULL);
	if (tmp)
	{
		printf("error 11 strcat: should return NULL\n");
		++error;
	}
	printf("strcat  test end %d error detected\n", error);
}