NAME = megaphone
GCC = c++ 
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./megaphone.cpp 
OBJ = ./megaphone.o

# DEBUG = -d

all : $(NAME)

$(NAME) : $(OBJ)
	$(GCC) $(CPP_FLAGS) -o $@ $^
$(OBJ) : $(SRC)
	$(GCC) $(CPP_FLAGS) -c $< -o $@

clean :
	rm $(OBJ)  

fclean : clean 
	rm $(NAME)

re: fclean all 

.PHONY : all clean fclean re