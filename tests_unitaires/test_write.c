#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include "libftasm.h"

void		test_errno(char *str, int len)
{
	int		real_errno;
	int		my_errno;
	int		result;
	int		my_result;

	printf("\nTest for write WITH ERRNO\n");
	result = write (-1, str, len);
	real_errno = errno;
	my_result = ft_write(-1, str, len);
	my_errno = errno;
	if (real_errno != my_errno)
	{
		printf("Real error return: %d\n", result);
		printf("Real errno: %d (%s)\n", real_errno, strerror(real_errno));
		printf("My error return: %d\n", my_result);
		printf("My errno: %d (%s)\n", my_errno, strerror(my_errno));
		printf("ft_write is not working\n");
	}
	else
	{
		printf("write returns %d\n", my_result);
		printf("Errno: %d (%s)\n", my_errno, strerror(my_errno));
		printf("ft_write is working\n");
	}
	return ;
}

int	main(void)
{
	char	*str;
	int		len;
	int		result;
	int		my_result;

	printf("Test for write\n");
	str = "Bonjour\n";
	len = 8;
	result = write(1, str, len);
	my_result = ft_write(1, str, len);
	if (result != my_result)
	{
		printf("Return for write: %d\n", result);
		printf("Return for my write: %d\n", my_result);
		printf("ft_write is not working\n");
	}
	else
	{
		printf("write returns %d\n", my_result);
		printf("ft_write is working\n");
	}
	test_errno(str, len);
	return (0);
}