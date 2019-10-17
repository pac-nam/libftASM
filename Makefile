# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by tbleuse           #+#    #+#              #
#    Updated: 2018/10/23 13:48:46 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftasm

CC = gcc

CASM = nasm

FLAGS = -Wall -Wextra -Werror

SRC_FOLDER = srcs

INCLUDE_FOLDER = includes

OBJ_FOLDER = objs

SRC_FOLDER = srcs

SRC_FILES = ft_isdigit.s					\
			ft_isprint.s					\
			ft_isalpha.s					\
			ft_isalnum.s					\
			ft_isascii.s					\
			ft_tolower.s					\
			ft_toupper.s					\
			ft_bzero.s						\
			ft_strcpy.s						\
			ft_strcat.s						\
			ft_puts.s						\
			ft_strlen.s						\
			ft_memset.s						\

SRC = $(addprefix $(SRC_FOLDER)/, $(SRC_FILES))

OBJ = $(addprefix $(OBJ_FOLDER)/, $(SRC_FILES:.s=.o))

all : $(NAME)

$(NAME): $(OBJ_FOLDER) $(OBJ)
	@ar rc $@.a $(OBJ)
	@ranlib $@.a
	@echo "\033[32m[ ✔ ] $@ compiled\033[0m"

$(OBJ_FOLDER):
	@mkdir -p $@
	@echo "creating $(NAME) object..."

$(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.s
	@$(CASM) -f macho64 $< -o $@

clean :
	@/bin/rm -rf $(OBJ_FOLDER)
	@echo "\033[33m[ ✔ ] $(NAME) objects deleted\033[0m"

fclean : clean
	@/bin/rm -f $(NAME).a
	@echo "\033[33m[ ✔ ] $(NAME) deleted\033[0m"

lib : all clean

re : fclean all

.PHONY: $(NAME) $(OBJ_FOLDER)