/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:28:40 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 16:28:41 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_isalpha(void)
{
	int i = CHAR_MIN - 1;
	int error = 0;

	while (i < CHAR_MAX + 1)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("error: isalpha %1$d:'%1$c' == %2$d\n", i, ft_isalpha(i));
			++error;
		}
		++i;
	}
	printf("isalpha test end %d error detected\n", error);
}
