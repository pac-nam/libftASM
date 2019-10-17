/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:24:58 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 16:24:59 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_strlen(void)
{
	char	str[11];
	int		i = 11;
	int		error = 0;

	strcpy(&(str[0]), "0123456789");
	while (--i >= 0)
	{
		str[i] = '\0';
		if (strlen(str) != ft_strlen(str))
		{
			printf("error strlen :%ld != %ld | string: %s\n", strlen(str), ft_strlen(str), str);
			++error;
		}
	}
	ft_strlen(NULL);
	printf("strlen  test end %d error detected\n", error);
}