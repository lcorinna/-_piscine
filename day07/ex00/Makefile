NAME_TEMPLATES	=	templates

TEMPLATES		=	main.cpp

OBJ_TEMPLATES	=	$(TEMPLATES:.cpp=.o)

CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98


all:				$(NAME_TEMPLATES)

$(NAME_TEMPLATES):	$(OBJ_TEMPLATES)
	c++ $(CPPFLAGS) $(OBJ_TEMPLATES) -o $@

%.o:				%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_TEMPLATES)

fclean:				clean
	rm -f $(NAME_TEMPLATES)

re:					fclean all

.PHONY: 			all clean fclean re