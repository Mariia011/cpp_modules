NAME = ./this_is_brain
GCC = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./main.cpp
OBJS = $(SRC:.c=.o)
COLOUR_GREEN= \033[0;32m
COLOUR_END=\033[0m

all: $(NAME)

$(NAME) : $(OBJS)
	@echo "$(COLOUR_GREEN)Makefile work proceeded$(COLOUR_END)"
	@$(GCC) $(OBJS) -o $@

$(OBJS) : 
	$(GCC) 

clean : 
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
