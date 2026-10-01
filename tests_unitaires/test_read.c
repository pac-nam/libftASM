/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:24:58 by tbleuse           #+#    #+#             */
/*   Updated: 2026/10/01 00:00:00 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

#include "libftasm.h"

int			ft_test_read(void)
{
	char	buffer[15];
	char	my_buffer[15];
	ssize_t	result;
	ssize_t	my_result;
	int		fd;
	int		my_fd;
	int		real_errno;
	int		my_errno;
	int		real_ok = 0;
	int		my_ok = 0;
	int		error = 0;

	fd = open("Makefile", O_RDONLY);
	if (fd == -1)
	{
		printf("error read: expected to open Makefile, got %s\n",
			strerror(errno));
		++error;
	}
	else
	{
		result = read(fd, buffer, 14);
		close(fd);
		if (result < 0)
		{
			printf("error read: expected a successful read, got -1 (%s)\n",
				strerror(errno));
			++error;
		}
		else
		{
			buffer[result] = '\0';
			real_ok = 1;
		}
	}
	my_fd = open("Makefile", O_RDONLY);
	if (my_fd == -1)
	{
		printf("error ft_read: expected to open Makefile, got %s\n",
			strerror(errno));
		++error;
	}
	else
	{
		my_result = ft_read(my_fd, my_buffer, 14);
		close(my_fd);
		if (my_result < 0)
		{
			printf("error ft_read: expected a successful read, got -1 (%s)\n",
				strerror(errno));
			++error;
		}
		else
		{
			my_buffer[my_result] = '\0';
			my_ok = 1;
		}
	}
	if (real_ok && my_ok)
	{
		if (result != my_result || strcmp(buffer, my_buffer) != 0)
		{
			printf("error read: expected %ld bytes \"%.*s\", got %ld bytes \"%.*s\"\n",
				result, (int)result, buffer, my_result, (int)my_result, my_buffer);
			++error;
		}
	}
	errno = 0;
	result = read(-1, buffer, 14);
	real_errno = errno;
	errno = 0;
	my_result = ft_read(-1, my_buffer, 14);
	my_errno = errno;
	if (result != -1 || my_result != -1 || real_errno != my_errno)
	{
		printf("error read errno: expected return %ld, errno %d (%s); got return %ld, errno %d (%s)\n",
			result, real_errno, strerror(real_errno), my_result, my_errno,
			strerror(my_errno));
		++error;
	}
	printf("read    test end %d error detected\n", error);
	return (error);
}

int			main(void)
{
	return (ft_test_read());
}