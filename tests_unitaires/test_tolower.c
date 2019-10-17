/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:27:27 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 16:27:28 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_tolower(void)
{
	int i = CHAR_MIN - 1;
	int error = 0;
	
	while (i < CHAR_MAX + 1)
	{
		if (ft_tolower(i) != tolower(i))
		{
			printf("error: tolower %1$d:'%1$c' == %2$d\n", i, ft_tolower(i));
			++error;
		}
		++i;
	}
	printf("tolower test end %d error detected\n", error);
}