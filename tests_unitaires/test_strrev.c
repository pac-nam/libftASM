/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:23:18 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/22 09:13:18 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <string.h>
#include <unistd.h>

char		*ft_strrev_verif(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = -1;
	j = ft_strlen(str);
	while (++i < --j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	return (str);
}

void		ft_test_strrev(void)
{
	char	ress[12];
	char	resm[12];
	int		i = 3;
	int		error = 0;

	strcpy(&(resm[0]), "hello world");
	strcpy(&(ress[0]), "hello world");
	while (--i >= 0)
	{
		ft_strrev(&(resm[0]));
		ft_strrev_verif(&(ress[0]));
		if (memcmp(&(resm[0]), &(ress[0]), 12))
		{
			write(1, "strrev error: sys |", 19);
			write(1, &(ress[0]), 12);
			write(1, "| != mine |", 11);
			write(1, &(resm[0]), 12);
			write(1, "|\n", 2);
			error++;
		}
	}
	ft_strrev(NULL);
	printf("strrev  test end %d error detected\n", error);
}
