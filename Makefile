# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jose <jose@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 17:23:44 by jose              #+#    #+#              #
#    Updated: 2022/11/20 16:42:46 by jose             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_goodc.c \
		ft_putptr.c \
		ft_putnbr.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar

AFLAGS = rcs

RM = rm -f

all : $(NAME)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(AR) $(AFLAGS) $@ $^

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

prog : main.c all
	$(CC) $(CFLAGS) $< -o $@ -L. -lftprintf

fprog : fclean
	$(RM) prog