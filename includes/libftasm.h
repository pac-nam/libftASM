/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftasm.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:20:33 by tbleuse           #+#    #+#             */
/*   Updated: 2019/10/21 15:15:19 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTASM_H
# define LIBFTASM_H
# include <stdio.h>
# include <ctype.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <strings.h>

void	ft_bzero(void *ptr, size_t n);
void	ft_cat(int fd);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dst, void *src, size_t size);
void	*ft_memset(void *ptr, int c, size_t size);
void	ft_puts(const char *str);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);

int		ft_memcmp(void *ptr, void *ptr2, size_t size);
int		ft_strcmp(char *str, char *str2);
void	*ft_memchr(void *ptr, int c, size_t size);
char	*ft_strchr(char *str, int c);
void	*ft_memrev(void *ptr, size_t size);
void	*ft_memrchr(void *ptr, int c, size_t size);
char	*ft_strrchr(char *str, int c);
int		ft_strncmp(char *str, char *str2, size_t size);
int		ft_strequ(char *str, char *str2);
int		ft_strnequ(char *str, char *str2, size_t size);
char	*ft_strrev(char *str);
char	*ft_strnchr(char *str, int c, size_t size);
char	*ft_strstr(char *str, char *str2);
void	ft_putchar(int c);
void	ft_putchar_fd(int c, int fd);
void	ft_putstr(const char *str);
void	ft_putstr_fd(const char*str, int c);
void	ft_putendl(const char *str);
void	ft_putendl_fd(const char*str, int c);

#endif