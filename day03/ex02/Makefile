NAME_CLAPTRAP	=	FragTrap

CLAPTRAP		=	main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp

OBJ_CLAPTRAP	=	$(CLAPTRAP:.cpp=.o)

CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98


all:				$(NAME_CLAPTRAP)

$(NAME_CLAPTRAP):	$(OBJ_CLAPTRAP)
	c++ $(CPPFLAGS) $(OBJ_CLAPTRAP) -o $@

%.o:				%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_CLAPTRAP)

fclean:				clean
	rm -f $(NAME_CLAPTRAP)

re:					fclean all

.PHONY: all clean fclean re