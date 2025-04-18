NAME = ./ZombieHorde

GCC = c++ 

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./ZombieHorde.cpp ./Zombie.cpp ./main.cpp

all : $(NAME)

$(NAME) : 
	$(GCC) $(CPP_FLAGS) $(SRC) -o $@

clean : 
	rm $(NAME)

fclean : clean 

re: fclean all

.PHONY: all clean fclean re