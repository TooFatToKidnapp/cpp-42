SRC = megaphone.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:%.cpp=%.o)

NAME = megaphone

all : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f megaphone.o

fclean : clean
	rm -f megaphone

re : fclean all
