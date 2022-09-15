NAME_REPLACE	=	replace

REPLACE			=	main.cpp

OBJ_REPLACE		=	$(REPLACE:.cpp=.o)

CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98

all:				$(NAME_REPLACE)

$(NAME_REPLACE):	$(OBJ_REPLACE)
	c++ $(CPPFLAGS) $(OBJ_REPLACE) -o $@

%.o:				%.cpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_REPLACE)

fclean:				clean
	rm -f $(NAME_REPLACE)

re:					fclean all

.PHONY: all clean fclean re