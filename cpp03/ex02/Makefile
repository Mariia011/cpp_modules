NAME = FragTrap
CXX = g++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
OBJS = $(addprefix $(OBJS_PATH)/, $(SRC:.cpp=.o))
OBJS_PATH = objs

COLOR_GREEN = \033[32m
COLOR_RESET = \033[0m
COLOR_RED = \033[0;31m
UNDERLINE = \u001b[4m
BLINK = \u001b[5m

all : $(NAME)

$(NAME) : $(OBJS)
	@echo "$(COLOR_GREEN)Linking objects into $(NAME)...$(COLOR_RESET)"
	$(CXX) $(OBJS) -o $@

$(OBJS_PATH)/%.o: %.cpp
	@mkdir -p $(OBJS_PATH)
	$(CXX) $(CPP_FLAGS) $< -o $@
	
clean :  
	rm -rf	$(OBJ_DIR)/$(OBJS) 

fclean : clean 
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re