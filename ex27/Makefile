# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgavillo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 23:16:46 by mgavillo          #+#    #+#              #
#    Updated: 2018/11/07 19:51:21 by mgavillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = main.c

OBJS = main.o

FLAGS = -Werror -Wall -Wextra

CLEAN = clean

all : $(NAME)

$(NAME):
	gcc -c $(SRCS)
	cc $(FLAGS) -o $(NAME) $(OBJS)

clean :
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all
