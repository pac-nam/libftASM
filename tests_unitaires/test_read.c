#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#include "libftasm.h"

int	test_errno(char *buffer, char *my_buffer)
{
	int		my_result;
	int		real_errno;
	int		my_errno;
	int		result;
	int		error = 0;

	printf("\nTest for read WITH ERRNO\n");
	result = read(-1, buffer, 14);
	real_errno = errno;
	my_result = ft_read(-1, my_buffer, 14);
	my_errno = errno;
	if (real_errno != my_errno)
	{
		printf("Real error return: %d\n", result);
		printf("Real errno: %d (%s)\n", real_errno, strerror(real_errno));
		printf("My error return: %d\n", my_result);
		printf("My errno: %d (%s)\n", my_errno, strerror(my_errno));
		printf("ft_read is not working\n");
		error++;
	}
	else
	{
		printf("read returns %d\n", my_result);
		printf("Errno: %d (%s)\n", my_errno, strerror(my_errno));
		printf("ft_read is working\n");
	}
	return (error);
}

void	testing_read(char *buffer, int *result, char *my_buffer, int *my_result)
{
	int	fd;

	printf("Test for read\n");
	fd = open("Makefile", O_RDONLY);
	if (fd == -1)
		printf("Error in opening file\n");
	else
	{
		*result = read(fd, buffer, 14);
		buffer[*result] = '\0';
	}
	close(fd);
	fd = open("Makefile", O_RDONLY);
	if (fd == -1)
		printf("Error opening file\n");
	else
	{
		*my_result = ft_read(fd, my_buffer, 14);
		my_buffer[*my_result] = '\0';
	}
	close(fd);
}

int	main(void)
{
	char	buffer[15];
	int		result;
	char	my_buffer[15];
	int		my_result;

	testing_read(buffer, &result, my_buffer, &my_result);
	if (result != my_result || strcmp(buffer, my_buffer) != 0)
	{
		printf("Real read returns %d\n", result);
		printf("Real read file content: %s\n", buffer);
		printf("My read returns %d\n", my_result);
		printf("My read file content: %s\n", my_buffer);
		printf("ft_read is not working\n");
	}
	else
	{
		printf("read returns %d\n", my_result);
		printf("read file content: %s", my_buffer);
		printf("\nft_read is working\n");
	}
	test_errno(buffer, my_buffer);
	return (0);
}