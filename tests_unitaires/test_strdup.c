/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:26:36 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/21 16:03:55 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		strdel(char *str)
{
	if (str)
		free(str);
	str = NULL;
}

void		ft_test_strdup(void)
{
	char	*mine;
	char	*sys;
	int		error = 0;

	mine = ft_strdup("");
	sys = strdup("");
	if (strcmp(sys, mine) || mine == sys || mine == &("hello"[0]))
	{
		printf("error 1 strdup: sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	strdel(mine);
	strdel(sys);
	mine = ft_strdup("hello");
	sys = strdup("hello");
	if (strcmp(sys, mine) || mine == sys || mine == &("hello"[0]))
	{
		printf("error 2 strdup: sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	strdel(mine);
	strdel(sys);
	mine = ft_strdup(NULL);
	if (mine)
	{
		printf("error 3 strdup: should return NULL\n");
		++error;
	}
	printf("strdup  test end %d error detected\n", error);
}