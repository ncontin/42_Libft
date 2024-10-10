# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 10:27:46 by ncontin           #+#    #+#              #
#    Updated: 2024/10/10 19:01:52 by ncontin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJS     = $(SRC:.c=.o)
CC      = gcc
CCFLAGS = -Wall -Wextra -Werror
RM      = rm -f
NAME	= libft.a

all: $(NAME) clean

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CCFLAGS) -o $@ -c $<
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	fclean all

.PHONY: clean
clean:
	rm -f *.o
