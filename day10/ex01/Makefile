# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlubowit <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 22:02:19 by tlubowit          #+#    #+#              #
#    Updated: 2018/09/05 18:06:35 by tlubowit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfile.a

SRC = src/*.c

HEAD = *.h

all: make_lib

make_lib:
	gcc -c -Wall -Werror -Wextra $(SRC) -I $(HEAD)
	ar rc $(NAME) *.o
	ranlib $(NAME)

start: 
	-gcc *.c -I $(HEAD) -L. -lfile

norm:
	norminette -R CheckForbiddenSourceHeader *.c

fclean:
	/bin/rm -f *.o $(NAME)

re: fclean all
