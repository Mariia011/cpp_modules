NAME = phonebook
GCC = c++
OBJ_FLAG = -c
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = AwesomePhonebook.cpp Contact.cpp PhoneBook.cpp 
OBJS = $(subst .cpp,.o,$(SRC))

all : $(NAME)

$(NAME) : $(OBJS)
	$(GCC) $^ -o $@
%.o: %.cpp
	$(GCC) $(CPP_FLAGS) $(OBJ_FLAG) $< -o $@

clean : 
	rm $(OBJS)

fclean : clean 
	rm $(NAME)

re: fclean all 

.PHONY : all clean fclean re