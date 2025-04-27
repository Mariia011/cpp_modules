GREEN = \033[32m
COLOUR_BLUE=\033[0;34m
RESET = \033[0m

define PRINT_LOADING
	@printf "$(GREEN)Compiling... ["
	@for i in $(shell seq 0 10 100); do \
		printf "▓"; \
		sleep 0.1; \
	done
	@printf "] 100%%$(RESET)\n"
endef

NAME = megaphone
GCC = c++ 
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./tests.cpp ./Account.cpp
OBJ = $(subst .cpp,.o,$(SRC))

# DEBUG = -d

all : $(NAME)

$(NAME) : $(OBJ)
	@$(GCC) $< -o $@

$(OBJ) : $(SRC)
	@$(PRINT_LOADING)
	@$(GCC) -c $(CPP_FLAGS) $< -o $@
	@echo "$(COLOUR_BLUE)FILES ARE RESTORED SUCCESSFULLY$(RESET)"

clean :
	@rm $(OBJ)  

fclean : clean 
	@rm $(NAME)

re: fclean all

.PHONY : all clean fclean re
