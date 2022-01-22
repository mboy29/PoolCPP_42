# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 08:59:33 by mboy              #+#    #+#              #
#    Updated: 2021/12/20 08:59:35 by mboy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Trap

SRCS		=	./main.cpp\
				./ClapTrap.cpp\
				./ScavTrap.cpp

CXX			=	clang++
RM			=	rm -rf
CXXFLAGS	=	-Wall -Werror -Wextra
RESET   	=	$'\033[0m
COLOR     	=	$'\x1b[37m\x1b[1m
OBJS		=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o:%.c
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	@echo "$(COLOR)--> Compiling ...$(RESET)"
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "$(COLOR)--> Here we go ! $(RESET)"

clean:
	@echo "$(COLOR)--> Cleaning ...$(RESET)"
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
