NAME = ./replace_string

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp ./add_ons.cpp ./Functor.cpp

OBJS = $(SRC %.c=.o)

DEBUG = -g 

VALGRIND = valgrind --leak-check=full --show-leak-kinds=all

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(DEBUG) $(SRC) -o $@

%.o : %.cpp
	$(CXX) $(CPP_FLAGS) -c $(SRC) 

leaks : all
	$(VALGRIND) ${NAME}

clean : 
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re: fclean all

.PHONY : all leaks clean fclean re