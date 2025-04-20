NAME = ./replace_string

GCC = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

# DEBUG = -g 

# VALGRIND = valgrind --leak-check=full --show-leak-kinds=all

SRC = ./ZombieHorde.cpp ./Zombie.cpp ./main.cpp

all : $(NAME)

$(NAME) : 
	$(GCC) $(DEBUG) $(CPP_FLAGS) $(SRC) -o $@

leaks : all
	$(VALGRIND) ${NAME}

clean : 
	rm $(NAME)

fclean : clean 