# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/05 18:01:46 by alefranc          #+#    #+#              #
#    Updated: 2022/08/08 16:24:18 by alefranc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#
#                                                                              #
#                               DECLARATIONS                                   #
#                                                                              #
#------------------------------------------------------------------------------#

#------------------------------------#
#             COMPILATION            #
#------------------------------------#

NAME = hithisisbrain

CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

#------------------------------------#
#          SOURCES AND CLASSES       #
#------------------------------------#


SRC		=	main.cpp

#------------------------------------#
#               OBJECTS              #
#------------------------------------#

OBJ		= $(SRC:.cpp=.o)

#------------------------------------#
#               SUMMARY              #
#------------------------------------#

INC_FLAG	=
LD_FLAG		=

#------------------------------------------------------------------------------#
#                                                                              #
#                                   RULES                                      #
#                                                                              #
#------------------------------------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $(LD_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@mkdir -p `dirname $@`
	$(CC) $(CFLAG) -c $< -o $@ $(INC_FLAG)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
