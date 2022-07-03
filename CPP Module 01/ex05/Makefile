NAME = Harl

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp\
		Harl.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clear :
	rm -f $(NAME)

re : clear all
