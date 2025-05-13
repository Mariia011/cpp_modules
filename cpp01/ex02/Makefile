NAME = ./this_is_brain
CXX = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./main.cpp
OBJS = $(SRC:.cpp=.o)
COLOUR_GREEN= \033[0;32m
COLOUR_END=\033[0m

all: $(NAME)

$(NAME) : $(OBJS)
	@echo "$(COLOUR_GREEN)Brain is ready to rock$(COLOUR_END)"
	@$(CXX) $(CPP_FLAGS) $(OBJS) -o $@

%.o: %.cpp
	@$(CXX) -c $(CPP_FLAGS) $< -o $@

clean : 
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
