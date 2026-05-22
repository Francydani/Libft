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

UTILS = ft_printf_utils.c 

SRC = ft_printf.c $(UTILS)
OBJ = $(SRC:.c=.o)

SRC_BONUS = ft_printf.c ft_printf_bonus.c ft_utils_bonus.c $(UTILS)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

INCLUDE = ft_printf.h

AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $@ $^

bonus: $(OBJ_BONUS)
		$(RM) $(NAME)
		$(AR) $(NAME) $(OBJ_BONUS)

%.o: %.c $(INCLUDE)
		$(CC) $(CFLAGS) -c -o $@ $<

clean:
		$(RM) $(OBJ) $(OBJ_BONUS)
		
fclean: clean
		$(RM) $(NAME) libftprintf.h.gch

re: fclean all