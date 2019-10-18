/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:00:05 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/18 15:13:51 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <fcntl.h>

void		ft_test_cat(void)
{
	int		fd;

	ft_cat(-1);
	fd = open("Makefile", O_RDONLY);
	ft_cat(fd);
	close(fd);
}
