NAME = ./convert 

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ScalarConverter.cpp
OBJS = $(patsubst %.cpp, %.o, $(SRC))


all : $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o:%.cpp
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re