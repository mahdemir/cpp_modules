# System Check
ifeq ($(shell uname -s), Darwin)
    # macOS
	LEAKS_CMD = leaks -atExit --
else ifeq ($(shell uname -s), Linux)
    # Linux
	LEAKS_CMD = valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all
endif

NAME		= iter

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -pedantic -g3

SRC			= main.cpp

OBJ_DIR		= .build
OBJ			= $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

DEPENDS		= $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) -MMD -c $< -o $@

-include $(DEPENDS)

leaks l: $(NAME)
	$(LEAKS_CMD) ./$(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all leaks l clean fclean re
