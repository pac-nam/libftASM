/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomasbleuse <thomasbleuse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:30:48 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/19 17:51:07 by thomasbleus      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_test_bzero(void);
void	ft_test_cat(void);
void	ft_test_isalnum(void);
void	ft_test_isalpha(void);
void	ft_test_isascii(void);
void	ft_test_isdigit(void);
void	ft_test_isprint(void);
void	ft_test_memcpy(void);
void	ft_test_memset(void);
void	ft_test_puts(void);
void	ft_test_strcat(void);
void	ft_test_strcpy(void);
void	ft_test_strdup(void);
void	ft_test_strlen(void);
void	ft_test_tolower(void);
void	ft_test_toupper(void);

void	ft_test_memcmp(void);
void	ft_test_memchr(void);
void	ft_test_strchr(void);

int			main(void)
{
	ft_test_cat();
	ft_test_puts();
	ft_test_strlen();
	ft_test_memset();
	ft_test_bzero();
	ft_test_isdigit();
	ft_test_isalnum();
	ft_test_isalpha();
	ft_test_isprint();
	ft_test_isascii();
	ft_test_tolower();
	ft_test_toupper();
	ft_test_strcpy();
	ft_test_strcat();
	ft_test_memcpy();
	ft_test_strdup();
	ft_test_memchr();
	ft_test_strchr();
	ft_test_memcmp();
	return (0);
}