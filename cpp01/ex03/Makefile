NAME = unnecessary_violence
CXX = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./HumanA.cpp ./HumanB.cpp ./Weapon.cpp ./main.cpp
OBJS_PATH = obj
OBJS = $(addprefix $(OBJS_PATH)/, $(SRC:.cpp=.o))


GREEN = \033[0;32m
RESET = \033[0m
# VALGRIND = valgrind --leak-check=full --show-leak-kinds=all

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CPP_FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)'unnecessary_violence' is built successfully!$(RESET)"

$(OBJS_PATH)/%.o: %.cpp
	@mkdir -p $(OBJS_PATH)
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_PATH)

# leaks: all
# 	$(VALGRIND) $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re #leaks