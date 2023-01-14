# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 22:08:06 by aanghel           #+#    #+#              #
#    Updated: 2023/01/14 02:36:34 by aanghel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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