NAME		= account

SRC			= Account.cpp tests.cpp

OBJ			= ${SRC:.cpp=.o}

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -pedantic -std=c++98
RM			= rm -rf

all: ${NAME}

$(NAME): ${OBJ}
		${CC} ${CPPFLAGS} -I . ${OBJ} -o ${NAME}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
