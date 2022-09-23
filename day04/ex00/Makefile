NAME_ANIMAL	=	Animal

ANIMAL		=	main.cpp 

OBJ_ANIMAL	=	$(ANIMAL:.cpp=.o)

CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98


all:				$(NAME_ANIMAL)

$(NAME_ANIMAL):	$(OBJ_ANIMAL)
	c++ $(CPPFLAGS) $(OBJ_ANIMAL) -o $@

%.o:				%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_ANIMAL)

fclean:				clean
	rm -f $(NAME_ANIMAL)

re:					fclean all

.PHONY: all clean fclean re