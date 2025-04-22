NAME = ./replace_string

GCC = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp

$(OBJS) = $(subst SRC %.c=.o)

DEBUG = -g 

VALGRIND = valgrind --leak-check=full --show-leak-kinds=all

all : $(NAME)

$(NAME) : $(OBJS)
	$(GCC) $(DEBUG) $(CPP_FLAGS) $(SRC) -o $@

$(OBJS) : 
	$(GCC) -c $(SRC)

leaks : all
	$(VALGRIND) ${NAME}

clean : 
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re: fclean all

.PHONY : all leaks clean fclean re