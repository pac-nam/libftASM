/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:46:10 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 16:47:10 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftasm.h"

void		ft_test_isprint(void)
{
	int i = CHAR_MIN;
	int error = 0;

	while (i < CHAR_MAX + 1)
	{
		if (ft_isprint(i) != isprint(i))
		{
			printf("error: isprint %1$d:'%1$c' == %2$d\n", i, ft_isprint(i));
			++error;
		}
		++i;
	}
	printf("isprint test end %d error detected\n", error);
}
