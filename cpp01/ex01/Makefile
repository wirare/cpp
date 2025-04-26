NAME = zombie
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
FILE = Zombie.cpp \
	   main.cpp \
	   zombieHorde.cpp \

all: $(NAME)
$(NAME): $(FILE)
	@$(CC) $(FLAGS) $(FILE) -o $(NAME)
	@echo ${NAME} "compiled successfully"
clean:
	@rm -f $(NAME)
	@echo ${NAME} "removed successfully"
re: clean all
.PHONY: all clean fclean re
