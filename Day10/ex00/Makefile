#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sskinner <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 16:12:36 by sskinner          #+#    #+#              #
#    Updated: 2018/10/01 16:13:26 by sskinner         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c
INCLUDES = includes/
OFILE = ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

all: bricks
	ar rc $(NAME) $(OFILE)
	ranlib $(NAME)

bricks:
	gcc -c $(SRC) -I $(INCLUDES)

clean:
	rm -f $(OFILE)

fclean: clean
	rm -f $(NAME)

re: fclean all