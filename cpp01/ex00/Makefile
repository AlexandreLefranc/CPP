# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/05 18:01:46 by alefranc          #+#    #+#              #
#    Updated: 2022/08/05 18:43:24 by alefranc         ###   ########.fr        #
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

NAME = ex00

CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

#------------------------------------#
#               HEADERS              #
#------------------------------------#

HEADER		=	class/Zombie.hpp

#------------------------------------#
#          SOURCES AND CLASSES       #
#------------------------------------#


SRCDIR		=	src/
SRCFILE		=	main.cpp \
				newZombie.cpp \
				randomChump.cpp

CLDIR		=	class/
CLFILE		=	Zombie.cpp

SRC			=	$(addprefix $(SRCDIR), $(SRCFILE))
CL			=	$(addprefix $(CLDIR), $(CLFILE))

#------------------------------------#
#               OBJECTS              #
#------------------------------------#

OBJDIR		=	obj/
OBJ			=	$(subst $(SRCDIR),$(OBJDIR),$(SRC:.cpp=.o)) \
				$(subst $(CLDIR),$(OBJDIR),$(CL:.cpp=.o))

#------------------------------------#
#               SUMMARY              #
#------------------------------------#

INC_FLAG	= -I class
LD_FLAG	=

#------------------------------------------------------------------------------#
#                                                                              #
#                                   RULES                                      #
#                                                                              #
#------------------------------------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $(LD_FLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	@mkdir -p `dirname $@`
	$(CC) $(CFLAG) -c $< -o $@ $(INC_FLAG)

$(OBJDIR)%.o: $(CLDIR)%.cpp
	@mkdir -p `dirname $@`
	$(CC) $(CFLAG) -c $< -o $@ $(INC_FLAG)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
