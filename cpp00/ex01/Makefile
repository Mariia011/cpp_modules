NAME = phonebook
CXX = c++ -g
OBJ_FLAG = -c
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = AwesomePhonebook.cpp Contact.cpp PhoneBook.cpp 
OBJS_PATH = objs
OBJS = $(addprefix $(OBJS_PATH)/, $(SRC:.cpp=.o))

COLOUR_BLUE=\033[0;34m
RESET = \033[0m

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(CPP_FLAGS) $^ -o $@
	@echo "$(COLOUR_BLUE)🦾AWESOME PHONEBOOK IS READY-Y-Y!$(RESET)"

$(OBJS_PATH)/%.o: %.cpp
	@mkdir -p $(OBJS_PATH)
	@$(CXX) $(CPP_FLAGS) $(OBJ_FLAG) $< -o $@

clean : 
	@rm -rf $(OBJS_PATH)

fclean : clean 
	@rm $(NAME)

re: fclean all 

.PHONY : all clean fclean re