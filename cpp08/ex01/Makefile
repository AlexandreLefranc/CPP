# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 15:54:47 by alefranc          #+#    #+#              #
#    Updated: 2022/10/06 16:03:29 by alefranc         ###   ########.fr        #
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

NAME = span

CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98 -g3

#------------------------------------#
#               HEADERS              #
#------------------------------------#

HEADER		=	class/Span.hpp

#------------------------------------#
#          SOURCES AND CLASSES       #
#------------------------------------#


SRCDIR		=	src/
SRCFILE		=	main.cpp

CLDIR		=	class/
CLFILE		=	Span.cpp \

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
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
