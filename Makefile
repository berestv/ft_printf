# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbento-e <bbento-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 15:06:33 by bbento-e          #+#    #+#              #
#    Updated: 2022/12/06 16:04:23 by bbento-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
		ft_printaddr.c \
		ft_putchar.c \
		ft_puthex.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putunsg.c \

OBJ = ${SRC:.c=.o}

all: ${NAME}

$(NAME): ${OBJ}
	ar rcs ${NAME} ${OBJ}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all
