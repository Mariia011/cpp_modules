NAME = ./this_is_brain
GCC = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./main.cpp
COLOUR_GREEN= \033[0;32m
COLOUR_END=\033[0m

all: $(NAME)

$(NAME) : 
	@echo "$(COLOUR_GREEN)Makefile work proceeded$(COLOUR_END)"
	@$(GCC) $(CPP_FLAGS) $(SRC) -o $@

clean : 
	rm $(NAME)

fclean : clean

re: fclean all

.PHONY: all clean fclean re
