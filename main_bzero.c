#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int		ft_bzero(void *ptr, size_t n);

char	*ft_memset(char *ptr, int i, char c)
{
	while (--i >= 0)
		ptr[i] = c;
	return (ptr);
}

int		main(void)
{
	char		tab[5];
	
	write(1, "start\n", 6);
	ft_memset(&(tab[0]), 5, 'a');
	ft_bzero(&(tab[0]), 3);
	write(1, tab, 5);
	return (0);
}