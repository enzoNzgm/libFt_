# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 12:03:06 by enzuguem          #+#    #+#              #
#    Updated: 2024/11/19 16:34:29 by enzuguem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_strchr.c ft_strlcat.c\
			ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_atoi.c\
			ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_split.c\
			ft_itoa.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c \

FILES_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\
					
OBJ = $(FILES:.c=.o)
OBJ_B = $(FILES_B:.c=.o)
all: $(NAME)
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus : $(OBJ) $(OBJ_B)
	ar rc $(NAME) $(OBJ) $(OBJ_B)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ) $(OBJ_B)
fclean: clean
	rm -f $(NAME) $(bonus)
re: fclean all