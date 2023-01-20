
NAME= sed

SRC= main.cpp


OBJ = $(SRC:.cpp=.o)

FLAGS = g++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME) : $(SRC)
	@$(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -rf *.replace

re: fclean all

.PHONY: all clean fclean re