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

SRC_FILES = ft_memcmp.s						\
			ft_memcpy.s						\
			ft_strcmp.s						\
			ft_strcpy.s						\
			ft_strdup.s						\
			ft_strlen.s						\

TEST_FILES = test_strcmp.c					\
			 test_strcpy.c					\
			 test_strdup.c					\
			 test_strlen.c					\

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