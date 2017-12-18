# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robihaap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 11:26:39 by robihaap          #+#    #+#              #
#    Updated: 2017/11/07 12:17:39 by robihaap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CCNEED = gcc -Wall -Wextra -Werror

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strcmp.c ft_strlen.c

HEADER = ./includes/

PATHFILE = ./srcs/

OBJ = ft_putchar.o ft_swap.o ft_putstr.o ft_strcmp.o ft_strlen.o

all: $(NAME)

$(NAME):
	$(CCNEED) -c $(addprefix $(PATHFILE), $(SRC)) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
