/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:30:48 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/17 16:59:39 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_test_bzero(void);
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
void	ft_test_strlen(void);
void	ft_test_tolower(void);
void	ft_test_toupper(void);

int			main(void)
{
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
	return (0);
}