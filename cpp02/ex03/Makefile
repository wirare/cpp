NAME = Fixed
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
FILE = Fixed.cpp \
	   Point.cpp \
	   main.cpp \

all: $(NAME)
$(NAME): $(FILE)
	@$(CC) $(FLAGS) $(FILE) -o $(NAME)
	@echo ${NAME} "compiled successfully"
debug: $(FILE)
	@$(CC) $(FLAGS) -g $(FILE) -o $(NAME) -DDEBUG=1
	@echo ${NAME} "compiled successfully with debug"
clean:
	@rm -f $(NAME)
	@echo ${NAME} "removed successfully"
re: clean all
.PHONY: all clean fclean re
