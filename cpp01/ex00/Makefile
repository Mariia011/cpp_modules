NAME = stack_and_heap
CXX = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./newZombie.cpp ./randomChump.cpp ./Zombie.cpp ./main.cpp
OBJS = $(subst .cpp,.o,$(SRC))

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(CPP_FLAGS) $(OBJS) -o $@
	
%.o: %.cpp
	@$(CXX) -c $(CPP_FLAGS) $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean 
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re  
