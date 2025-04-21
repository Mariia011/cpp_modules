NAME = unnecessary_violence
GCC = c++
CPP_FLAGS = -Wall -Wextra -Werror
SRC = ./HumanA.cpp ./HumanB.cpp ./Weapon.cpp ./main.cpp
OBJS = $(SRC:.cpp=.o)
GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@$(GCC) $(CPP_FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Build completed successfully!$(RESET)"

%.o: %.cpp
	@$(GCC) $(CPP_FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re