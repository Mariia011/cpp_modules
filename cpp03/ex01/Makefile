NAME = ClapTrap 
CXX = g++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = $(SRC:.cpp=.o)

COLOR_GREEN = \033[32m
COLOR_RESET = \033[0m
COLOR_RED = \033[0;31m
UNDERLINE = \u001b[4m
BLINK = \u001b[5m

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CPP_FLAGS) $(OBJS) -o $@

%.o : %.cpp
	$(CXX) $(CPP_FLAGS) -c $(SRC)

clean :  
	rm -rf $(OBJS)

fclean : clean 
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re