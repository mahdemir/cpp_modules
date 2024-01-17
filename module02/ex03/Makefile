ifeq ($(shell uname -s), Darwin)
    # macOS
	LEAKS_CMD = leaks -atExit --
else ifeq ($(shell uname -s), Linux)
    # Linux
	LEAKS_CMD = valgrind --leak-check=full
endif

NAME		= bsp

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -pedantic -std=c++98
RM			= rm -rf

SRC			= main.cpp \
				Fixed.cpp \
				Point.cpp \
				bsp.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

leaks: $(NAME)
	$(LEAKS_CMD) ./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
