/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:27:02 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 16:27:03 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_toupper(void)
{
	int i = CHAR_MIN - 1;
	int error = 0;
	
	while (i < CHAR_MAX + 1)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf("error: toupper %1$d:'%1$c' == %2$d\n", i, ft_toupper(i));
			++error;
		}
		++i;
	}
	printf("toupper test end %d error detected\n", error);
}
