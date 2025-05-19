NAME = ./polymorphic_classes

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(OBJS) -o $@
	@echo "'polymorphic_class' exe is ready to show the magic"

%.o : %.cpp
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean : 
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re