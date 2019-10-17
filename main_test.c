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
char	*ft_strcpy(size_t *, const char *src);
char	*ft_strcat(char *dst, const char *src);
void	ft_puts(const char *str);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int c, size_t size);

void		ft_test_bzero(void)
{
	char		tab[5];
	char		tab2[5];
	int error = 0;
	int	no_warning = 0;
	
	ft_memset(&(tab[0]), 'a', 5);
	ft_bzero(&(tab[0]), 3);
	ft_memset(&(tab2[0]), 'a', 5);
	bzero(&(tab2[0]), 3);
	if (strncmp(tab, tab2, 5))
	{
		printf("bzero test error %5s != %5s\n", tab, tab2);
		++error;
	}
	ft_memset(&(tab[0]), 'a', 5);
	ft_bzero(&(tab[0]), no_warning);
	ft_memset(&(tab2[0]), 'a', 5);
	bzero(&(tab2[0]), no_warning);
	if (strncmp(tab, tab2, 5))
	{
		printf("bzero test error %5s != %5s\n", tab, tab2);
		++error;
	}
	ft_memset(&(tab[0]), 'a', 5);
	ft_bzero(&(tab[0]), 5);
	ft_memset(&(tab2[0]), 'a', 5);
	bzero(&(tab2[0]), 5);
	if (strncmp(tab, tab2, 5))
	{
		printf("bzero test error %5s != %5s\n", tab, tab2);
		++error;
	}
	ft_bzero(NULL, 3);
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

void		ft_test_strcpy(void)
{
	char	mine[6];
	char	sys[6];
	int		error = 0;

	ft_strcpy(&(mine[0]), "");
	strcpy(&(sys[0]), "");
	if (strcmp(sys, mine))
	{
		printf("error strcpy :sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	ft_strcpy(&(mine[0]), "hello");
	strcpy(&(sys[0]), "hello");
	if (strcmp(sys, mine))
	{
		printf("error strcpy :sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	ft_strcpy(NULL, &(mine[0]));
	ft_strcpy(&(mine[0]), NULL);
	ft_strcpy(NULL, NULL);
	printf("strcpy  test end %d error detected\n", error);
}

void		ft_test_strcat(void)
{
	char	mine[13];
	char	sys[13];
	char	*to_copy = " world";
	int		error = 0;
	
	bzero(&(mine[0]), 10);
	strcpy(&(mine[0]), "hello");
	ft_strcat(&(mine[0]), to_copy);
	bzero(&(sys[0]), 10);
	strcpy(&(sys[0]), "hello");
	strcat(&(sys[0]), to_copy);
	if (strcmp(sys, mine))
	{
		printf("error: sys |%s| != mine |%s|\n", sys, mine);
		++error;
	}
	ft_strcat(NULL, to_copy);
	ft_strcat(&(mine[0]), NULL);
	ft_strcat(NULL, NULL);
	printf("strcat  test end %d error detected\n", error);
}

void		ft_test_puts(void)
{
	ft_puts(NULL);
	ft_puts("puts    test end 0 error detected\n");
}

void		ft_test_strlen(void)
{
	char	str[11];
	int		i = 11;
	int		error = 0;

	strcpy(&(str[0]), "0123456789");
	while (--i >= 0)
	{
		str[i] = '\0';
		if (strlen(str) != ft_strlen(str))
		{
			printf("error strlen :%ld != %ld | string: %s\n", strlen(str), ft_strlen(str), str);
			++error;
		}
	}
	ft_strlen(NULL);
	printf("strlen  test end %d error detected\n", error);
}

void		ft_test_memset()
{
	char		tab[6];
	int			error = 0;

	tab[5] = '\0';
	ft_memset(&(tab[0]), 'a', 5);
	if (strcmp(tab, "aaaaa"))
	{
		printf("error memset :%s != %s\n", tab, "aaaaa");
		++error;
	}
	ft_memset(&(tab[0]), 'c', 0);
	if (strcmp(tab, "aaaaa"))
	{
		printf("error memset :%s != %s\n", tab, "aaaaa");
		++error;
	}
	ft_memset(NULL, ' ', 10);
	printf("memset  test end %d error detected\n", error);
}

int			main(void)
{
	ft_test_puts();
	ft_test_strlen();
	ft_test_memset();
	ft_test_bzero();
	ft_test_isdigit();
	ft_test_isalnum();
	ft_test_isalpha();
	ft_test_isascii();
	ft_test_tolower();
	ft_test_toupper();
	ft_test_strcpy();
	ft_test_strcat();
	return (0);
}