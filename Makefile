# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssicard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/21 18:28:28 by ssicard           #+#    #+#              #
#    Updated: 2015/12/30 11:39:24 by ssicard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIB = header.a

INC_DIR = includes

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I$(INC_DIR)

SOURCES = ft_putchar.c \
	  ft_putstr.c \
	  ft_strlen.c \
	  ft_putnbr.c \
	  ft_get_buffer.c \
	  ft_strcpy_mod.c \
	  ft_strdup.c \
	  ft_create_chain.c \
	  ft_convert.c \
	  ft_add_link.c \
	  ft_print_list.c \
	  ft_epur.c \
	  ft_solve.c \
	  ft_alloc_mem.c \
	  ft_print_grid.c \
	  ft_list_push_back.c \
	  is_clean.c \
	  ft_replace.c \
	  ft_put_piece.c \
	  ft_check_piece.c \
	  ft_make_grid.c \
	  ft_error.c \
	  ft_check.c \
	  ft_check_plus.c \
	  ft_strdup_mod.c \
	  ft_reduce.c \
	  ft1.c \
	  ft2.c \
	  ft3.c \
	  ft4.c

SRC = $(addprefix sources/,$(SOURCES))

OBJ = $(SRC:.c=.o)

all : $(NAME) $(LIB)

$(NAME) : $(LIB)
	@$(CC) -o $(NAME) main.c $(LIB) $(CFLAGS)
	@echo "All : complete"

$(LIB) : $(OBJ)
	@ar -r $(LIB) $(OBJ)
	@ranlib $(LIB)
	@echo "Header Lib. Done."

clean :
	@rm -rf $(OBJ)
	@echo "Clean : success"

fclean : clean
	@rm -rf $(NAME) $(LIB)
	@echo "Fclean : success"

re : fclean all
	@echo "Fclean all : succes"

.PHONY: all clean fclean re
