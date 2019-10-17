/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:28:11 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 16:28:12 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_isascii(void)
{
	int i = CHAR_MIN - 1;
	int error = 0;
	
	while (i < CHAR_MAX + 1)
	{
		if (ft_isascii(i) != isascii(i))
		{
			printf("error: isascii %1$d:'%1$c' == %2$d\n", i, ft_isascii(i));
			++error;
		}
		++i;
	}
	printf("isascii test end %d error detected\n", error);
}
