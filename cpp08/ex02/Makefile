NAME = ./mutant

CXX = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
HDR = MutantStack.hpp MutantStack.tpp

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

%.o:%.cpp
	@$(CXX) $(CPP_FLAGS) -c $< -o $@

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY : all clean fclean re