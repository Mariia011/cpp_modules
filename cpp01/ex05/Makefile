NAME = ./harl_complain

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Harl.cpp 

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(OBJS) -o $@
	@echo "HARL COMPLAIN is ready"

%.o : %.cpp
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean : 
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re