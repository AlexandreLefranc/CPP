# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 15:13:36 by alefranc          #+#    #+#              #
#    Updated: 2022/09/15 18:31:31 by alefranc         ###   ########.fr        #
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

NAME = abstract

CC = c++
CFLAG = -Wall -Wextra -Werror -g3 -std=c++98

#------------------------------------#
#               HEADERS              #
#------------------------------------#

HEADER		=	class/AAnimal.hpp \
				class/Cat.hpp \
				class/Dog.hpp \
				class/Brain.hpp

#------------------------------------#
#          SOURCES AND CLASSES       #
#------------------------------------#

SRCDIR		=	src/
SRCFILE		=	main.cpp

CLDIR		=	class/
CLFILE		=	AAnimal.cpp \
				Cat.cpp \
				Dog.cpp \
				Brain.cpp

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
