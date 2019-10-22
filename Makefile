# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by tbleuse           #+#    #+#              #
#    Updated: 2019/10/22 09:16:36 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

T_NAME = test

CC = gcc

CASM = nasm

FLAGS = -Wall -Wextra -Werror

SRC_FOLDER = srcs

INCLUDE_FOLDER = includes

T_OBJ_FOLDER = tests_objs

OBJ_FOLDER = objs

SRC_FOLDER = srcs

T_FOLDER = tests_unitaires

SRC_FILES = ft_bzero.s						\
			ft_cat.s						\
			ft_isalnum.s					\
			ft_isalpha.s					\
			ft_isascii.s					\
			ft_isdigit.s					\
			ft_isprint.s					\
			ft_memcpy.s						\
			ft_memset.s						\
			ft_puts.s						\
			ft_strcat.s						\
			ft_strcpy.s						\
			ft_strdup.s						\
			ft_strlen.s						\
			ft_tolower.s					\
			ft_toupper.s					\
			ft_memcmp.s						\
			ft_strcmp.s						\
			ft_memchr.s						\
			ft_strchr.s						\
			ft_memrev.s						\
			ft_memrchr.s					\
			ft_strrchr.s					\
			ft_strncmp.s					\
			ft_strequ.s						\
			ft_strnequ.s					\
			ft_strrev.s						\
			ft_strnchr.s					\
			ft_strstr.s						\
			ft_putchar.s					\
			ft_putchar_fd.s					\
			ft_putstr.s						\
			ft_putstr_fd.s					\
			ft_putendl.s					\
			ft_putendl_fd.s					\

TEST_FILES = main_test.c					\
			test_bzero.c					\
			test_cat.c						\
			test_isalnum.c					\
			test_isalpha.c					\
			test_isascii.c					\
			test_isdigit.c					\
			test_isprint.c					\
			test_memcpy.c					\
			test_memset.c					\
			test_puts.c						\
			test_strcat.c					\
			test_strcpy.c					\
			test_strdup.c					\
			test_strlen.c					\
			test_tolower.c					\
			test_toupper.c					\
			test_memcmp.c					\
			test_strcmp.c					\
			test_memchr.c					\
			test_strchr.c					\
			test_memrev.c					\
			test_memrchr.c					\
			test_strrchr.c					\
			test_strncmp.c					\
			test_strequ.c					\
			test_strnequ.c					\
			test_strrev.c					\
			test_strnchr.c					\
			test_strstr.c					\
			test_puttrucs.c					\

SRC = $(addprefix $(SRC_FOLDER)/, $(SRC_FILES))

T_SRC = $(addprefix $(T_FOLDER)/, $(TEST_FILES))

OBJ = $(addprefix $(OBJ_FOLDER)/, $(SRC_FILES:.s=.o))

T_OBJ = $(addprefix $(T_OBJ_FOLDER)/, $(TEST_FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJ_FOLDER) $(OBJ)
	@ar rc $@ $(OBJ)
	@ranlib $@
	@echo "\033[32m[ V ] $@ compiled\033[0m"

$(OBJ_FOLDER):
	@mkdir -p $@
	@echo "creating $(NAME) object..."

$(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.s
	@$(CASM) -f macho64 $< -o $@

clean:
	@/bin/rm -rf $(OBJ_FOLDER) $(T_OBJ_FOLDER)
	@echo "\033[33m[ V ] $(NAME) objects deleted\033[0m"
	@echo "\033[33m[ V ] $(T_NAME) objects deleted\033[0m"

fclean: clean
	@/bin/rm -f $(NAME) $(T_NAME)
	@echo "\033[33m[ V ] $(NAME) deleted\033[0m"
	@echo "\033[33m[ V ] $(T_NAME) deleted\033[0m"

lib: all clean

re: fclean all

$(T_NAME) : $(NAME) $(T_OBJ_FOLDER) $(T_OBJ)
	@$(CC) $(T_OBJ) $(NAME) -o $(T_NAME)
	@echo "\033[32m[ V ] $@ compiled\033[0m"
	@./$(T_NAME)

$(T_OBJ_FOLDER):
	@mkdir -p $@
	@echo "creating $(T_NAME) object..."

$(T_OBJ_FOLDER)/%.o: $(T_FOLDER)/%.c
	@$(CC) -I includes -c $(FLAGS) $< -o $@

.PHONY: $(T_NAME)