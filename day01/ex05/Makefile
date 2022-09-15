NAME_SHOOTOUT		=	shootout

SHOOTOUT			=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ_SHOOTOUT		=	$(SHOOTOUT:.cpp=.o)

CPPFLAGS			=	-Wall -Wextra -Werror -std=c++98

all:				$(NAME_SHOOTOUT)

$(NAME_SHOOTOUT):	$(OBJ_SHOOTOUT)
	c++ $(CPPFLAGS) $(OBJ_SHOOTOUT) -o $@

%.o:				%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_SHOOTOUT)

fclean:				clean
	rm -f $(NAME_SHOOTOUT)

re:					fclean all

.PHONY: all clean fclean re