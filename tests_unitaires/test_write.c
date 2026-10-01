#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

#include "libftasm.h"

int			ft_test_write(void)
{
	const char	*str = "Bonjour\n";
	size_t		len = strlen(str);
	ssize_t		result;
	ssize_t		my_result;
	int			real_errno;
	int			my_errno;
	int			fd;
	int			error = 0;

	fd = open("/dev/null", O_WRONLY);
	if (fd == -1)
	{
		printf("error write: expected to open /dev/null, got %s\n",
			strerror(errno));
		++error;
	}
	else
	{
		result = write(fd, str, len);
		my_result = ft_write(fd, str, len);
		close(fd);
		if (result != (ssize_t)len || my_result != result)
		{
			printf("error write: expected %zu bytes, got write=%ld and ft_write=%ld\n",
				len, result, my_result);
			++error;
		}
	}
	errno = 0;
	result = write(-1, str, len);
	real_errno = errno;
	errno = 0;
	my_result = ft_write(-1, str, len);
	my_errno = errno;
	if (result != -1 || my_result != result || real_errno != my_errno)
	{
		printf("error write errno: expected return %ld, errno %d (%s); got return %ld, errno %d (%s)\n",
			result, real_errno, strerror(real_errno), my_result, my_errno,
			strerror(my_errno));
		++error;
	}
	printf("write   test end %d error detected\n", error);
	return (error);
}

int			main(void)
{
	return (ft_test_write());
}