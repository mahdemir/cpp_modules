# System Check
ifeq ($(shell uname -s), Darwin)
    # macOS
	LEAKS_CMD = leaks -atExit --
else ifeq ($(shell uname -s), Linux)
    # Linux
	LEAKS_CMD = valgrind --leak-check=full -show-leak-kinds=all
endif

NAME		= fixed

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -pedantic

SRC			= main.cpp \
				Fixed.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

leaks l: $(NAME)
	$(LEAKS_CMD) ./$(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all leaks l clean fclean re
