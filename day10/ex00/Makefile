# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlubowit <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 22:39:51 by tlubowit          #+#    #+#              #
#    Updated: 2018/09/04 21:03:13 by tlubowit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/*.c

HEADERS_FOLDER = includes

all: $(NAME)

$(NAME):
	gcc -I $(HEADERS_FOLDER) -c -Wall -Werror -Wextra $(SRC)
	ar -rv $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
