NAME = ZombieHorde

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

# DEBUG = -g 

# VALGRIND = valgrind --leak-check=full --show-leak-kinds=all

SRC = ./ZombieHorde.cpp ./Zombie.cpp ./main.cpp
OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CPP_FLAGS) $(OBJS) -o $@

$(OBJS) : $(SRC)
	$(CXX) $(CPP_FLAGS) -c $(SRC)

leaks : all
	$(VALGRIND) $(NAME)

clean : 
	@rm $(OBJS)
fclean : clean 
	@rm $(NAME)

re: fclean all

.PHONY: all clean fclean leaks re