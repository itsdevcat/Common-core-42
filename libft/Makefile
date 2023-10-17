# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 17:49:06 by cfranco-          #+#    #+#              #
#    Updated: 2023/10/12 14:41:05 by cfranco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_toupper.c ft_tolower.c ft_atoi.c ft_bzero.c ft_isalpha.c ft_isascii.c \
		ft_isprint.c ft_isdigit.c ft_itoa.c ft_memcpy.c ft_memcmp.c ft_memmove.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
		ft_memset.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_memchr.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strmapi.c ft_strrchr.c ft_strtrim.c ft_substr.c  ft_calloc.c

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