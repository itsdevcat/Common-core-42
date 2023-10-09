# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 17:49:06 by cfranco-          #+#    #+#              #
#    Updated: 2023/10/04 11:50:27 by cfranco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_toupper.c ft_tolower.c ft_atoi.c ft_bzero.c ft_isalpha.c ft_isascii.c /
		ft_isprint.c ft_memcmp.c ft_memmov.c ft_memset.c ft_strlen.c ft_strncmp.c /
		ft_strnstr.c ft_memchr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o -libft.so $(OBJS)
