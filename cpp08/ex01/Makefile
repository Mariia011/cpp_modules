NAME = ./ex01

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Span.cpp main.cpp
HDR = Span.hpp

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

%.o:%.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY : all clean fclean re