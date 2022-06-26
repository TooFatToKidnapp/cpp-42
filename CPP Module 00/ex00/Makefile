SRC = megaphone.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -f megaphone.o

fclean : clean
	rm -f megaphone

re : fclean all
