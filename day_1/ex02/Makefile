NAME	=	account

SRC		=	Account.cpp test.cpp

HEADER	=	Account.hpp

OBJ		=	$(SRC:%.cpp=%.o)

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

.PHONY	=	all clean fclean re test

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HDR)
				$(CC) $(FLAGS) $(OBJ) -I. -o $(NAME)

clean	:
				$(RM) $(OBJ)

fclean	:	clean
				$(RM) $(NAME)

re		:	fclean all

