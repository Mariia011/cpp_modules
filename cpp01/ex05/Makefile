NAME = ./harl_complain

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp ./Harl.cpp 

OBJS = $(SRC %.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(SRC) -o $@

$(OBJS) :  
	$(CXX) $(CPP_FLAGS) -c $(SRC) 

clean : 
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re: fclean all

.PHONY : all clean fclean re