/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:29:10 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 16:45:50 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_isalnum(void)
{
	int i = CHAR_MIN - 1;
	int error = 0;
	while (i < CHAR_MAX + 1)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			printf("error: isalnum %1$d:'%1$c' == %2$d\n", i, ft_isalnum(i));
			++error;
		}
		++i;
	}
	printf("isalnum test end %d error detected\n", error);
}