# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlubowit <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 22:02:19 by tlubowit          #+#    #+#              #
#    Updated: 2018/09/05 14:39:09 by tlubowit         ###   ########.fr        #
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
	-gcc -c *.c -L. -lfile -o out

norm:
	norminette -R CheckForbiddenSourceHeader *.c

fclean:
	/bin/rm -f *.o $(NAME)

re: fclean all
