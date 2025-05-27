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

NAME = ./tanjanq

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Intern.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp 

OBJ_DIR = objs

OBJS = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(OBJS) -o $@
	@$(PRINT_LOADING) $(RESET)
	@ echo "$(GREEN)LIAR LAWYER MIRROR FOR YA '\n' WHAT'S THE DIFFERENCE?$(RESET)"

$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean : 
	@rm -rf $(OBJ_DIR)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re