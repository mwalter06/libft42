# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwalter <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 14:41:49 by mwalter           #+#    #+#              #
#    Updated: 2021/04/23 21:36:34 by mwalter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# C COMPILER
CC = gcc
NAME = libft.a

# SRC FILES
SRC =	 ft_strlen.c \
	 	 ft_strcmp.c \
		 ft_strncmp.c \
		 ft_strchr.c \
		 ft_strlcpy.c \
		 ft_strrchr.c \
		 ft_strlcat.c \
		 ft_strnstr.c \
		 ft_strdup.c \
		 ft_strjoin.c \
		 ft_strtrim.c \
		 ft_strmapi.c \
		 ft_substr.c \
		 ft_tolower.c \
		 ft_toupper.c \
		 ft_isalpha.c \
		 ft_isdigit.c \
		 ft_isalnum.c \
		 ft_isascii.c \
		 ft_isprint.c \
		 ft_bzero.c \
		 ft_calloc.c \
		 ft_atoi.c \
		 ft_itoa.c \
		 ft_split.c \
		 ft_memset.c \
		 ft_memcpy.c \
		 ft_memcmp.c \
		 ft_memmove.c \
		 ft_memchr.c \
		 ft_memccpy.c \
		 ft_putchar_fd.c \
		 ft_putstr_fd.c \
		 ft_putnbr_fd.c \
		 ft_putendl_fd.c \

# BONUS FILES
SRC_BONUS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

# OBJECT FILES
OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

# C FLAGS
CFLAGS = -Wall -Wextra -Werror -I. -c

all : $(NAME)

$(NAME) : $(OBJ)
		ar rcs  $(NAME) $(OBJ)
exe :
	$(CC) $(CFLAGS) $(SRC) -L. $(NAME) -o prog

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME) *.tar

re : fclean all

bonus : $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $^

.PHONY : all clean fclean re
