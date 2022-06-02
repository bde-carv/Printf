# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 15:02:52 by bde-carv          #+#    #+#              #
#    Updated: 2022/05/25 16:52:37 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_DIR = libft/

SRC =	ft_printf.c \
		ft_hex.c \
		ft_pointer.c \
		ft_unsigned.c \
		utils.c \
		
CC = gcc

FLAGS = -Wall -Werror -Wextra

OBJECT = $(SRC:.c=.o)

all: $(NAME)

libft:
	make -C $(LIBFT_DIR) all

$(NAME): libft 
	$(CC) $(FLAGS) -c $(SRC) 
	ar rcs $(NAME) $(OBJECT) $(LIBFT_DIR)ft_*.o

clean: 
	/bin/rm -f *.o
	make -C $(LIBFT_DIR) clean

fclean:		clean
	/bin/rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all libft clean fclean re