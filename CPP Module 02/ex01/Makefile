NAME = My_First_Class_in_Orthodox_Canonical_Form

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
