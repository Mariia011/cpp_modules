NAME = phonebook
GCC = c++ -g
OBJ_FLAG = -c
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = AwesomePhonebook.cpp Contact.cpp PhoneBook.cpp 
OBJS = $(subst .cpp,.o,$(SRC))

all : $(NAME)

$(NAME) : $(OBJS)
	@$(GCC) -fsanitize=address $^ -o $@
%.o: %.cpp
	$(GCC) $(CPP_FLAGS) $(OBJ_FLAG) $< -o $@

clean : 
	@rm $(OBJS)

fclean : clean 
	@rm $(NAME)

re: fclean all 

.PHONY : all clean fclean re