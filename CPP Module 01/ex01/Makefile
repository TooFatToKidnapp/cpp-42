NAME = MoarBrainz

CC = c++

SRC =	main.cpp\
		Zombie.cpp\
		zombieHord.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -f $(NAME)

re : clean all
