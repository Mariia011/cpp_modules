NAME = ./SCAVTrap

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(OBJS) -o $@
	@echo "ScavTrap and ClapTrap are ready to slap"

%.o : %.cpp
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean : 
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re