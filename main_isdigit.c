#include <stdio.h>
#include <limits.h>

int		ft_isdigit(int c);

int		main(void)
{
	int i = CHAR_MIN;
	while (i < CHAR_MAX)
	{
		printf("'%c' is digit: %d\n", i, ft_isdigit(i));
		++i;
	}
	printf("'%c' 129 is digit: %d\n", i, ft_isdigit(i));
	return (0);
}