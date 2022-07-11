#------------------------------------------------------------------------------#
#                                                                              #
#                               DECLARATIONS                                   #
#                                                                              #
#------------------------------------------------------------------------------#

#------------------------------------#
#             COMPILATION            #
#------------------------------------#

NAME = megaphone

CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

#------------------------------------#
#               SOURCES              #
#------------------------------------#


SRCDIR		=

SRCFILE		=	megaphone.cpp

SRC			=	$(addprefix $(SRCDIR), $(SRCFILE))

#------------------------------------#
#               OBJECTS              #
#------------------------------------#

OBJDIR		=
OBJ			=	$(subst $(SRCDIR),$(OBJDIR),$(SRC:.cpp=.o))

#------------------------------------------------------------------------------#
#                                                                              #
#                                   RULES                                      #
#                                                                              #
#------------------------------------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $(OBJ) -o $(NAME)

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	@mkdir -p `dirname $@`
	$(CC) $(CFLAG) -c $< -o $@ $(INC_FLAG)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
