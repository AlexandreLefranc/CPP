# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 15:13:36 by alefranc          #+#    #+#              #
#    Updated: 2022/10/03 15:41:24 by alefranc         ###   ########.fr        #
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

NAME = identify

CC = c++
CFLAG = -Wall -Wextra -Werror -g3 -std=c++98

#------------------------------------#
#               HEADERS              #
#------------------------------------#

HEADER		=	class/Base.hpp \
				class/A.hpp \
				class/B.hpp \
				class/C.hpp

#------------------------------------#
#          SOURCES AND CLASSES       #
#------------------------------------#

SRCDIR		=	src/
SRCFILE		=	main.cpp

SRC			=	$(addprefix $(SRCDIR), $(SRCFILE))

#------------------------------------#
#               OBJECTS              #
#------------------------------------#

OBJDIR		=	obj/
OBJ			=	$(subst $(SRCDIR),$(OBJDIR),$(SRC:.cpp=.o))

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

$(OBJDIR)%.o: $(SRCDIR)%.cpp $(HEADER)
	@mkdir -p `dirname $@`
	$(CC) $(CFLAG) -c $< -o $@ $(INC_FLAG)

$(OBJDIR)%.o: $(CLDIR)%.cpp $(HEADER)
	@mkdir -p `dirname $@`
	$(CC) $(CFLAG) -c $< -o $@ $(INC_FLAG)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run
