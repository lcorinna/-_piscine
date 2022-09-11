NAME_ZOMBIE			=	Zombie

ZOMBIE				=	main.cpp

OBJ_ZOMBIE			=	$(ZOMBIE:.cpp=.o)

CPPFLAGS			=	-Wall -Wextra -Werror -std=c++98

all:				$(NAME_ZOMBIE)

$(NAME_ZOMBIE):		$(OBJ_ZOMBIE)
	c++ $(CPPFLAGS) $(OBJ_ZOMBIE) -o $@

%.o:				%.cpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_ZOMBIE)

fclean:				clean
	rm -f $(NAME_ZOMBIE)

re:					fclean all

.PHONY: all clean fclean re