# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 18:12:29 by aabdou            #+#    #+#              #
#    Updated: 2022/06/28 18:34:48 by aabdou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	Account.cpp\
		tests.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(SRC)
		$(CC) $(FLAGS) $(SRC) -o Account

clean:
	rm -f Account
	
re: fclean all
