NAME = UnnecessaryViolence

SRC =	HumanA.cpp\
		main.cpp\
		HumanB.cpp\
		Weapon.cpp

CC = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -f $(NAME)

re : clean all
