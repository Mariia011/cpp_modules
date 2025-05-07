NAME = unnecessary_violence
CXX = c++
CPP_FLAGS = -Wall -Wextra -Werror
SRC = ./HumanA.cpp ./HumanB.cpp ./Weapon.cpp ./main.cpp
OBJS = $(SRC:.cpp=.o)
GREEN = \033[0;32m
RESET = \033[0m
VALGRIND = valgrind --leak-check=full --show-leak-kinds=all

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CPP_FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Build completed successfully!$(RESET)"

%.o: %.cpp
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

leaks: all
	$(VALGRIND) $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re leaks