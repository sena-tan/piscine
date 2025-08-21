# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/16 18:06:33 by sbayrakt          #+#    #+#              #
#    Updated: 2025/08/17 16:08:10 by sbayrakt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Wextra -Werror
#SRC	=	dict.c file_get.c ft.c main.c printer.c
OBJ	=	main.o dict.o file_get.o printer.o ft.o
NAME	=	rush-02

all:	$(NAME)

#$(NAME)	: $(SRC)
#	cc $(CFLAGS) $(SRC) -o $(NAME)

$(NAME) : $(OBJ)
	cc $(CFLAGS) $(OBJ) -o $@

dict.o : dict.c dict.h
		cc $(CFLAGS) -c $< -o $@
file_get.o : file_get.c dict.h
		cc $(CFLAGS) -c $< -o $@
printer.o : printer.c ft.o dict.h
		cc $(CFLAGS) -c printer.c -o $@
ft.o : ft.c
		cc $(CFLAGS) -c $< -o $@
main.o : main.c  dict.h
		cc $(CFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJ)
fclean : clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean cleanall install edit cache git re