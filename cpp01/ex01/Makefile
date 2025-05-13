NAME = ./ZombieHorde

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

VALGRIND = valgrind --leak-check=full --show-leak-kinds=all

SRC = ./ZombieHorde.cpp ./Zombie.cpp ./main.cpp
OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(CPP_FLAGS) $(OBJS) -o $@

%.o: %.cpp
	@$(CXX) -c $(CPP_FLAGS) $< -o $@

leaks : all
	$(VALGRIND) $(NAME)

clean : 
	@rm -f $(OBJS)

fclean : clean 
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re leaks 