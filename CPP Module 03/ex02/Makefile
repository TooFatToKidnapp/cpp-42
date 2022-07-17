NAME = Serena_My_Love

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clear :
	rm -f $(NAME)

re : clear all
