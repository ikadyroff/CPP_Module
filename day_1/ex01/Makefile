NAME	=	phonebook

SRC		=	main.cpp Contact.cpp PhoneBook.cpp

HEADER	=	myAPB.h Contact.h PhoneBook.h

OBJ		=	$(SRC:.cpp=.o)

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf



.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
				$(CC) $(FLAGS) $(OBJ) -I. -o $(NAME)

clean:
				$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

re:			flean all