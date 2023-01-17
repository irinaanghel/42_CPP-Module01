# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 23:34:52 by aanghel           #+#    #+#              #
#    Updated: 2023/01/17 23:35:39 by aanghel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= harlFilter

SRCS= src/*.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = g++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME) : $(SRCS)
	@$(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re