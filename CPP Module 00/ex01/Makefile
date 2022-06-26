SRC =	PhoneBook.cpp\
		main.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

all : $(SRC)
	$(CC) -fsanitize=address $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -f PhoneBook.o main.o

fclean : clean
	rm -f PhoneBook

re : fclean all
