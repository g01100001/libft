# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 14:52:46 by gomandam          #+#    #+#              #
#    Updated: 2024/10/14 01:01:38 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC =	ft_isalpha.c \
	ft_isdigit.c  \
	ft_isalnum.c \
	ft_bzero.c \
	ft_memset.c \
	ft_strlen.c \
	ft_isprint.c \
	ft_isascii.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strncmp.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strdup.c \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_strlcat.c \
	ft_putendl_fd.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_calloc.c \
	ft_substr.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_split.c \

BONUS = ft_bonus.c \ 

OBJECTS = $(SRC:.c=.o)

OBJECTS_B = $(BONUS:.c=.o)

RM = rm -f

all: $(NAME)
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS) $(OBJECTS_B)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

