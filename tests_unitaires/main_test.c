/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:30:48 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/21 14:55:10 by tbleuse          ###   ########.fr       */
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
void	ft_test_strcmp(void);
void	ft_test_memchr(void);
void	ft_test_strchr(void);
void	ft_test_memrev(void);
void	ft_test_memrchr(void);
void	ft_test_strrchr(void);
void	ft_test_strncmp(void);
void	ft_test_strequ(void);
void	ft_test_strnequ(void);
void	ft_test_strrev(void);
void	ft_test_strnchr(void);
void	ft_test_strstr(void);
void	ft_test_puttrucs(void);

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
/*--------------------------BONUS----------------------*/
	ft_test_memchr();
	ft_test_strchr();
	ft_test_memcmp();
	ft_test_strcmp();
	ft_test_memrev();
	ft_test_memrchr();
	ft_test_strrchr();
	ft_test_strncmp();
	ft_test_strequ();
	ft_test_strnequ();
	ft_test_strrev();
	ft_test_strnchr();
	ft_test_strstr();
	ft_test_puttrucs();
	return (0);
}