# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 18:12:29 by aabdou            #+#    #+#              #
#    Updated: 2022/06/30 18:58:33 by aabdou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	Account.cpp\
		tests.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Account

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f Account

re: clean all
