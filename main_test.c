#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>

void	ft_bzero(void *ptr, size_t n);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

char		*ft_memset(char *ptr, int i, char c)
{
	while (--i >= 0)
		ptr[i] = c;
	return (ptr);
}

void		ft_test_bzero(void)
{
	char		tab[5];
	char		tab2[5];
	int error = 0;
	
	ft_memset(&(tab[0]), 5, 'a');
	ft_bzero(&(tab[0]), 3);
	ft_memset(&(tab2[0]), 5, 'a');
	bzero(&(tab2[0]), 3);
	if (strncmp(tab, tab2, 5))
	{
		printf("bzero test error %5s != %5s\n", tab, tab2);
		++error;
	}
	ft_memset(&(tab[0]), 5, 'a');
	ft_bzero(&(tab[0]), 0);
	ft_memset(&(tab2[0]), 5, 'a');
	bzero(&(tab2[0]), 0);
	if (strncmp(tab, tab2, 5))
	{
		printf("bzero test error %5s != %5s\n", tab, tab2);
		++error;
	}
	ft_memset(&(tab[0]), 5, 'a');
	ft_bzero(&(tab[0]), 5);
	ft_memset(&(tab2[0]), 5, 'a');
	bzero(&(tab2[0]), 5);
	if (strncmp(tab, tab2, 5))
	{
		printf("bzero test error %5s != %5s\n", tab, tab2);
		++error;
	}
	printf("bzero   test end %d error detected\n", error);
}

void		ft_test_isdigit(void)
{
	int i = CHAR_MIN;
	int error = 0;

	while (i < CHAR_MAX + 1)
	{
		if (ft_isdigit(i) != isdigit(i))
		{
			printf("error: isdigit %1$d:'%1$c' == %2$d\n", i, ft_isdigit(i));
			++error;
		}
		++i;
	}
	printf("isdigit test end %d error detected\n", error);
}

void		ft_test_isalnum(void)
{
	int i = CHAR_MIN - 1;
	int error = 0;
	while (i < CHAR_MAX + 1)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			printf("error: isalnum %1$d:'%1$c' == %2$d\n", i, ft_isalnum(i));
			++error;
		}
		++i;
	}
	printf("isalnum test end %d error detected\n", error);
}

void		ft_test_isalpha(void)
{
	int i = CHAR_MIN - 1;
	int error = 0;

	while (i < CHAR_MAX + 1)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("error: isalpha %1$d:'%1$c' == %2$d\n", i, ft_isalpha(i));
			++error;
		}
		++i;
	}
	printf("isalpha test end %d error detected\n", error);
}

void		ft_test_isascii(void)
{
	int i = CHAR_MIN - 1;
	int error = 0;
	
	while (i < CHAR_MAX + 1)
	{
		if (ft_isascii(i) != isascii(i))
		{
			printf("error: isascii %1$d:'%1$c' == %2$d\n", i, ft_isascii(i));
			++error;
		}
		++i;
	}
	printf("isascii test end %d error detected\n", error);
}

void		ft_test_tolower(void)
{
	int i = CHAR_MIN - 1;
	int error = 0;
	
	while (i < CHAR_MAX + 1)
	{
		if (ft_tolower(i) != tolower(i))
		{
			printf("error: tolower %1$d:'%1$c' == %2$d\n", i, ft_tolower(i));
			++error;
		}
		++i;
	}
	printf("tolower test end %d error detected\n", error);
}

void		ft_test_toupper(void)
{
	int i = CHAR_MIN - 1;
	int error = 0;
	
	while (i < CHAR_MAX + 1)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf("error: toupper %1$d:'%1$c' == %2$d\n", i, ft_toupper(i));
			++error;
		}
		++i;
	}
	printf("toupper test end %d error detected\n", error);
}

int			main(void)
{
	ft_test_bzero();
	ft_test_isdigit();
	ft_test_isalnum();
	ft_test_isalpha();
	ft_test_isascii();
	ft_test_tolower();
	ft_test_toupper();
	return (0);
}