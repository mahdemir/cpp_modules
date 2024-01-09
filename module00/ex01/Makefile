NAME		= phonebook

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -pedantic -std=c++98
RM			= rm -rf

SRC_DIR		= ./src
OBJ_DIR		= ./.build
INC_DIR 	= ./inc

SRC			= main.cpp \
				PhoneBook.cpp \
				Contact.cpp
OBJ		:= $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -I $(INC_DIR) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CPPFLAGS) -I $(INC_DIR) -o $@ -c $<

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
