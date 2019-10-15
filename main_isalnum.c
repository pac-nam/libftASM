#include <stdio.h>
#include <limits.h>

int		ft_isalnum(int c);

int		main(void)
{
	int i = CHAR_MIN;
	while (i < CHAR_MAX)
	{
		printf("'%c' is alnum: %d\n", i, ft_isalnum(i));
		++i;
	}
	printf("'%c' 129 is alnum: %d\n", i, ft_isalnum(i));
	return (0);
}