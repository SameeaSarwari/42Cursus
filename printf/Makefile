# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/11 17:47:30 by ssarwari          #+#    #+#              #
#    Updated: 2025/05/11 18:54:53 by ssarwari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS =	ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \
    	ft_print_nbr.c \
		ft_print_unsigned.c \
    	ft_print_hex.c \
		ft_print_ptr.c\
		ft_print_percent.c \
    	ft_utils.c

OBJ = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
