NAME = Towards_A_More_Useful_Fixed-point_Number_Class

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp\
		Fixed.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clear :
	rm -f $(NAME)

re : clear all
