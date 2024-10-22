# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 10:27:46 by ncontin           #+#    #+#              #
#    Updated: 2024/10/22 11:17:34 by ncontin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_tolower.c \
		ft_toupper.c \

BONUS_SRC = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \
# It simply replaces the .c from each file in the SRC variable by .o
OBJS     = $(SRC:.c=.o)
OBJS_BONUS = $(BONUS_SRC:.c=.o)
# CC is a variable containing the compiler
CC      = cc
# CCFLAGS is a variable containing the compiler flags
CFLAGS = -Wall -Wextra -Werror
# RM is an alias variable for the rm -f shell command.
RM      = rm -f
# NAME is a variable containing the name of the archive we want to create
OBJS_ALL = $(OBJS) $(OBJS_BONUS)
NAME	= libft.a

# ALL is the first rule in the Makefile, making it the default rule when
# calling the make command without specifying the rule.
all: $(NAME)

bonus: $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS_BONUS)

# $(NAME) is the main rule of the Makefile.
# This rule has the OBJS variable as a dependency, which means, if one or
# more .o files are missing, make will try to build them (if a rule for
# that exists) before running the $(NAME) commands.
# When all the dependency are there, the commands will be executed.
# The commands are what is described above in the variable declaration
# section :
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)


# CLEAN rule has no prerequisites
# What it does is use the $(RM) alias variable followed by the content of
# the OBJS_ALL variable, that is, every .o filenames.
# This results in all the .o files being deleted.

so:	$(OBJS_ALL)
	$(CC) -nostartfiles -fPIC $(CCFLAGS) -c $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS_ALL)


clean:
	$(RM) $(OBJS_ALL)

# FCLEAN rule has as prerequisite the CLEAN rule, which means that the
# CLEAN rule will be run first.
# When the CLEAN rule is done, the fclean commands will be run.
# This results in all the .io files being deleted, as well as the created
# library because it has the name $(NAME)
fclean: clean
	$(RM) $(NAME)

# RE rule has as prerequisites the FCLEAN and ALL rules.
# As the prerequisite are read from left to right, the first rule to be
# executed will be the FCLEAN rule, then we'll have the ALL rule.
# Since there are no commands for the RE rule, once the ALL rule is done,
# the RE rule will also be done.
re: fclean all


.PHONY: all, clean, fclean, re, bonus
