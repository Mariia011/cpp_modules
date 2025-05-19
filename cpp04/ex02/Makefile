NAME = ./polymorphic_classes_02

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp AAnimal.cpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(OBJS) -o $@
	@echo "'polymorphic_class 02' exe is ready to slay"

%.o : %.cpp
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean : 
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re