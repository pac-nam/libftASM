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

int		ft_memcmp(void *ptr, void *ptr2, size_t size);
void	*ft_memcpy(void *dst, void *src, size_t size);
ssize_t  ft_read(int fd, void *buf, size_t count);
int		ft_strcmp(char *str, char *str2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
ssize_t  ft_write(int fd, const void *buf, size_t count);

#endif