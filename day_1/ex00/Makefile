NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		=	$(SRC:%.cpp=%.o)

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ)
				$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
				rm -rf $(OBJ)

fclean	:	clean
				$(RM) $(NAME)

re		:	fclean all