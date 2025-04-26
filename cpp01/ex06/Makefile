NAME = HarlFilter
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
FILE = main.cpp \
	   Harl.cpp \

all: $(NAME)
$(NAME): $(FILE)
	@$(CC) $(FLAGS) $(FILE) -o $(NAME)
	@echo ${NAME} "compiled successfully"
clean:
	@rm -f $(NAME)
	@echo ${NAME} "removed successfully"
re: clean all
.PHONY: all clean fclean re
