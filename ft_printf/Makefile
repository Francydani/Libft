# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: francysa <francysa@student.42urduliz.com>    +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/05/15 11:38:49 by francysa            #+#    #+#             #
#   Updated: 2026/05/18 16:18:16 by francysa           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_strlen.c ft_putstr_fd.c ft_putchar_fd.c

OBJ = $(SRC:.c=.o)

INCLUDE = libftprintf.h

AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re -C

all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $@ $^

%.o: %.c $(INCLUDE)
		$(CC) $(CFLAGS) -c -o $@ $<

clean:
		$(RM) $(OBJ)
		
fclean: clean
		$(RM) $(NAME)

-C:
	

re: fclean all