/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:29:35 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 16:29:36 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_isdigit(void)
{
	int i = CHAR_MIN;
	int error = 0;

	while (i < CHAR_MAX + 1)
	{
		if (ft_isdigit(i) != isdigit(i))
		{
			printf("error: isdigit %1$d:'%1$c' == %2$d\n", i, ft_isdigit(i));
			++error;
		}
		++i;
	}
	printf("isdigit test end %d error detected\n", error);
}
