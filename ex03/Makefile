# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 17:01:01 by amakela           #+#    #+#              #
#    Updated: 2024/08/26 17:01:22 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	DiamondTrap

CPPFILES	=	src/main.cpp		src/ClapTrap.cpp		src/ScavTrap.cpp	\
				src/FragTrap.cpp	src/DiamondTrap.cpp
 
OFILES		=	$(CPPFILES:.cpp=.o)

HEADERS		=	-I include

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror

%.o:%.cpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
