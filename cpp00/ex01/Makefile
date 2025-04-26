NAME = phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
FILE = phonebook.cpp \
	   contact.cpp \
	   main.cpp \

all: $(NAME)
$(NAME): $(FILE)
	@$(CC) $(FLAGS) $(FILE) -o $(NAME)
	@echo ${NAME} "compiled successfully"
clean:
	@rm -f $(NAME)
	@echo ${NAME} "removed successfully"
re: clean all
.PHONY: all clean fclean re
