NAME = phonebook
GCC = c++ -g
OBJ_FLAG = -c
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = AwesomePhonebook.cpp Contact.cpp PhoneBook.cpp 
OBJS_PATH = objs
# OBJS = $($(OBJS_PATH)/subst .cpp,.o,$(SRC))
 OBJS = $(addprefix $(OBJS_PATH)/, $(SRC:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJS)
	@$(GCC) -fsanitize=address $^ -o $@

$(OBJS_PATH)/%.o: %.cpp
	@mkdir -p $(OBJS_PATH)
	$(GCC) $(CPP_FLAGS) $(OBJ_FLAG) $< -o $@

clean : 
	@rm -rf $(OBJS_PATH)

fclean : clean 
	@rm $(NAME)

re: fclean all 

.PHONY : all clean fclean re