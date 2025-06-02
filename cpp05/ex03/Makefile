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

NAME = ./intern 

CXX = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_FILES = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

SRC_DIR = src
INC_DIR = includes
OBJ_DIR = objs

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))

all : $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@
	@$(PRINT_LOADING)
	@echo "$(GREEN)Intern is ready to work$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re