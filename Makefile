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

NAME = libasm.a

CC = gcc

CASM = nasm

CASMFLAGS = -f elf64

FLAGS = -Wall -Wextra -Werror

SRC_FOLDER = srcs

INCLUDE_FOLDER = includes

OBJ_FOLDER = objs

SRC_FOLDER = srcs

T_FOLDER = tests_unitaires

TEST_OBJ_FOLDER = $(T_FOLDER)/objs

TEST_EXE_FOLDER = $(T_FOLDER)/exe

SRC_FILES = ft_memcmp.s						\
			ft_memcpy.s						\
			ft_strcmp.s						\
			ft_strcpy.s						\
			ft_strdup.s						\
			ft_strlen.s						\
			ft_read.s						\
			ft_write.s						\

TEST_FILES = test_strcmp.c					\
			 test_strcpy.c					\
			 test_strdup.c					\
			 test_strlen.c					\
			 test_read.c					\
			 test_write.c					\

SRC = $(addprefix $(SRC_FOLDER)/, $(SRC_FILES))

OBJ = $(addprefix $(OBJ_FOLDER)/, $(SRC_FILES:.s=.o))

TEST_BINS = $(addprefix $(TEST_EXE_FOLDER)/, $(TEST_FILES:.c=.exe))

TEST_OBJS = $(addprefix $(TEST_OBJ_FOLDER)/, $(TEST_FILES:.c=.o))

.SECONDARY: $(TEST_OBJS)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $(OBJ)
	@ranlib $@
	@echo "\033[32m[ V ] $@ compiled\033[0m"

$(OBJ_FOLDER):
	@mkdir -p $@
	@echo "creating $(NAME) object..."


$(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.s | $(OBJ_FOLDER)
	@$(CASM) $(CASMFLAGS) $< -o $@

clean:
	@/bin/rm -rf $(OBJ_FOLDER) $(TEST_OBJ_FOLDER)
	@echo "\033[33m[ V ] $(NAME) objects deleted\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -rf $(TEST_EXE_FOLDER)
	@echo "\033[33m[ V ] $(NAME) deleted\033[0m"

lib: all clean

re: fclean all

test: $(TEST_BINS)
	@set -e; for test in $(TEST_BINS); do ./$$test; done

$(TEST_OBJ_FOLDER):
	@mkdir -p $@

$(TEST_EXE_FOLDER):
	@mkdir -p $@

$(TEST_OBJ_FOLDER)/%.o: $(T_FOLDER)/%.c $(INCLUDE_FOLDER)/libftasm.h | $(TEST_OBJ_FOLDER)
	@$(CC) $(FLAGS) -I $(INCLUDE_FOLDER) -c $< -o $@

$(TEST_EXE_FOLDER)/%.exe: $(TEST_OBJ_FOLDER)/%.o $(NAME) | $(TEST_EXE_FOLDER)
	@$(CC) $(FLAGS) $< $(NAME) -o $@
	@echo "\033[32m[ V ] $@ compiled\033[0m"

.PHONY: test