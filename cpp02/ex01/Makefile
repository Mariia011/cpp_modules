NAME = fixed_01

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp ./Fixed.cpp 

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(SRC) -o $@

%.o : %.cpp 
	$(CXX) $(CPP_FLAGS) -c $(SRC) 

clean : 
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re: fclean all

.PHONY : all clean fclean re