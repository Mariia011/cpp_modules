NAME = ./ClapTrap

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp 

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(OBJS) -o $@
	@echo "ClapTrap is ready to clap"

%.o : %.cpp
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean : 
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean r