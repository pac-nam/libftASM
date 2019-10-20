/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasbleuse <thomasbleuse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:23:18 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/20 08:11:32 by thomasbleus      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <string.h>
#include <unistd.h>

void		ft_test_memrev(void)
{
	char	ress[12];
	char	resm[12];
	int		i = 13;
	int		error = 0;
	char	tmp;
	int		j;
	int		j2;

	memcpy(&(resm[0]), "hello world", 12);
	memcpy(&(ress[0]), "hello world", 12);
	while (--i >= 0)
	{
		ft_memrev(&(resm[0]), i);
		j = -1;
		j2 = i;
		while (++j < --j2)
		{
			tmp = ress[j];
			ress[j] = ress[j2];
			ress[j2] = tmp;
		}
		if (memcmp(&(resm[0]), &(ress[0]), 12))
		{
			write(1, "memrev error: sys |", 19);
			write(1, &(ress[0]), 12);
			write(1, "| != mine |", 11);
			write(1, &(resm[0]), 12);
			write(1, "|\n", 2);
			error++;
		}
	}
	ft_memrev(NULL, 10);
	ft_memrev(NULL, 0);
	printf("memrev  test end %d error detected\n", error);
}
