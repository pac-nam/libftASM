/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_puttrucs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:54:40 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/21 16:07:23 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftasm.h"

void		ft_test_puttrucs(void)
{
	ft_putchar('p');
	ft_putchar('u');
	ft_putchar('t');
	ft_putchar_fd('c', 1);
	ft_putchar_fd('h', 2);
	ft_putchar_fd('a', 2);
	ft_putstr("r test end 0 error detected\n");
	ft_putstr_fd("putchar_fd test end 0 error detected\n", 1);
	ft_putstr("putstr  test end 0 error detected");
	ft_putendl("");
	ft_putstr_fd("putstr_fd test end 0 error detected", 2);
	ft_putendl_fd("", 2);
	ft_putendl("putendl test end 0 error detected");
	ft_putendl_fd("putendl_fd test end 0 error detected", 1);
	ft_putstr(NULL);
	ft_putendl(NULL);
	ft_putstr_fd(NULL, 2);
	ft_putendl_fd(NULL, 1);
}
