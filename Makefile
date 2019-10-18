# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <tbleuse@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by tbleuse           #+#    #+#              #
#    Updated: 2019/10/18 11:50:07 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

TEST_NAME = test

CC = gcc

CASM = nasm

FLAGS = -Wall -Wextra -Werror

SRC_FOLDER = srcs

INCLUDE_FOLDER = includes

OBJ_FOLDER = objs

SRC_FOLDER = srcs

TEST_FOLDER = tests_unitaires

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

SRC = $(addprefix $(SRC_FOLDER)/, $(SRC_FILES))

TEST = $(addprefix $(TEST_FOLDER)/, $(TEST_FILES))

OBJ = $(addprefix $(OBJ_FOLDER)/, $(SRC_FILES:.s=.o))

all: $(NAME)

$(NAME): $(OBJ_FOLDER) $(OBJ)
	@ar rc $@ $(OBJ)
	@ranlib $@
	@echo "\033[32m[ √ ] $@ compiled\033[0m"

$(OBJ_FOLDER):
	@mkdir -p $@
	@echo "creating $(NAME) object..."

$(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.s
	@$(CASM) -f macho64 $< -o $@

clean:
	@/bin/rm -rf $(OBJ_FOLDER)
	@echo "\033[33m[ √ ] $(NAME) objects deleted\033[0m"

fclean: clean
	@/bin/rm -f $(NAME) $(TEST_NAME)
	@echo "\033[33m[ √ ] $(NAME) deleted\033[0m"

lib: all clean

re: fclean all

$(TEST_NAME) : all
	@$(CC) $(TEST) $(NAME) -I includes -o $(TEST_NAME)
	@./$(TEST_NAME)

.PHONY: