NAME		= megaphone

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -pedantic -std=c++98
RM			= rm -rf

SRC			= megaphone.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
