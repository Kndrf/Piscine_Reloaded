# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robihaap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 15:29:08 by robihaap          #+#    #+#              #
#    Updated: 2017/11/07 17:12:11 by robihaap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CCNEED = gcc -Wall -Wextra -Werror

FILES = main.c

OBJ = main.o

all: $(NAME)

$(NAME):
	$(CCNEED) -c $(FILES)
	$(CCNEED) -o $(NAME) $(FILES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
