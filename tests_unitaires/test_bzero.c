/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:30:00 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 16:45:27 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void		ft_test_bzero(void)
{
	char		mine[5];
	char		sys[5];
	int error = 0;
	int	no_warning = 0;
	
	ft_memset(&(mine[0]), 'a', 5);
	ft_bzero(&(mine[0]), 3);
	ft_memset(&(sys[0]), 'a', 5);
	bzero(&(sys[0]), 3);
	if (strncmp(mine, sys, 5))
	{
		printf("bzero 1 error %5s != %5s\n", mine, sys);
		++error;
	}
	ft_memset(&(mine[0]), 'a', 5);
	ft_bzero(&(mine[0]), no_warning);
	ft_memset(&(sys[0]), 'a', 5);
	bzero(&(sys[0]), no_warning);
	if (strncmp(mine, sys, 5))
	{
		printf("bzero 2 error %5s != %5s\n", mine, sys);
		++error;
	}
	ft_memset(&(mine[0]), 'a', 5);
	ft_bzero(&(mine[0]), 5);
	ft_memset(&(sys[0]), 'a', 5);
	bzero(&(sys[0]), 5);
	if (strncmp(mine, sys, 5))
	{
		printf("bzero 3 error %5s != %5s\n", mine, sys);
		++error;
	}
	ft_bzero(NULL, 3);
	printf("bzero   test end %d error detected\n", error);
}
