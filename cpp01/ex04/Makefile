NAME = replace_string
CXX = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp ./Sed.cpp
OBJS_PATH = obj
OBJS = $(addprefix $(OBJS_PATH)/, $(SRC:.cpp=.o))


GREEN = \033[0;32m
RESET = \033[0m
all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CPP_FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)'replace_string' is built successfully!$(RESET)"

$(OBJS_PATH)/%.o: %.cpp
	@mkdir -p $(OBJS_PATH)
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_PATH)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re