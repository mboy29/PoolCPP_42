# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 09:15:03 by mboy              #+#    #+#              #
#    Updated: 2021/12/20 09:15:04 by mboy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie

SRC			=	./main.cpp\
				./Zombie.cpp\
				./newZombie.cpp\
				./randomChump.cpp

CXX			=	clang++
RM			=	rm -rf
CXXFLAGS	=	-Wall -Werror -Wextra
RESET   	=	$'\033[0m
COLOR     	=	$'\x1b[37m\x1b[1m
OBJ			=	$(SRC:.cpp=.o)

all: $(NAME)

%.o:%.c
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	@echo "$(COLOR)--> Compiling ...$(RESET)"
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo "$(COLOR)--> Here we go ! $(RESET)"

clean:
	@echo "$(COLOR)--> Cleaning ...$(RESET)"
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
