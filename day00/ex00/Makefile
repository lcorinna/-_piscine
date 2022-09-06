NAME_MEGAFON	=	megaphone

MEGAFON			=	megafon.cpp

OBJ_MEGAFON		=	$(MEGAFON:.cpp=.o)

CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98

all:				$(NAME_MEGAFON)

$(NAME_MEGAFON):	$(OBJ_MEGAFON)
	g++ $(CPPFLAGS) $(OBJ_MEGAFON) -o $@

%.o:				%.cpp Makefile
	g++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_MEGAFON)

fclean:				clean
	rm -f $(NAME_MEGAFON)

re:					fclean all

.PHONY: all clean fclean re