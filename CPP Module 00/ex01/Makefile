SRC =	PhoneBook.cpp\
		main.cpp

CC = c++ -fsanitize=address

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

all : $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -f PhoneBook

re : clean all
