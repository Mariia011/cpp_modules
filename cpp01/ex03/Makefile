NAME = ./unnecessary_violence
GCC = c++
CPP_FLAGS = -Wall -Wextra -Werror
SRC = ./HumanA.cpp ./HumanB.cpp ./Weapon.cpp ./main.cpp
OBJS = $(SRC:.c=.o)
GREEN = \033[0;32m
RESET = \033[0m

all : $(NAME)

$(NAME) : $(OBJS)
	@echo "$(GREEN) Makefile's work proceeded successfully $(RESET)"
	@$(GCC) $(CPP_FLAGS) $(OBJS) -o $@

$(OBJS): 
	$(GCC) -c $(SRC)

clean : 
	rm $(OBJS)

fclean : clean 
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re