NAME = ./btc
GXX = g++ -std=c++98
FLAGS = -Wall -Wextra -Werror

SRC = ./BitcoinExchange.cpp 
HDR = ./BitcoinExchange.hpp 

all : $(NAME)

$(NAME) : $(SRC)
	$(GXX) $(FLAGS) $(SRC) -o $@

clean : 
	rm -rf $(NAME)

fclean : clean

re : make all

.PHONY : all clean fclean re