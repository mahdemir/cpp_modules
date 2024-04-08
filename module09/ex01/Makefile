# System Check
ifeq ($(shell uname -s), Darwin) # MacOS
	LEAKS_CMD = leaks -atExit --
else ifeq ($(shell uname -s), Linux) # Linux
	LEAKS_CMD = valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all
endif

# Add program arguments to leaks rule
ifeq (leaks, $(firstword $(MAKECMDGOALS)))
  ARGS := $(wordlist 2, $(words $(MAKECMDGOALS)), $(MAKECMDGOALS))
endif

NAME		= RPN

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++11

SRC			= main.cpp \
				RPN.cpp

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

leaks: $(NAME)
	$(LEAKS_CMD) ./$(NAME) $(ARGS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all leaks l clean fclean re
