NAME_LEVEL			=	level

LEVEL				=	main.cpp Harl.cpp

OBJ_LEVEL			=	$(LEVEL:.cpp=.o)

CPPFLAGS			=	-Wall -Wextra -Werror -std=c++98

all:			$(NAME_LEVEL)

$(NAME_LEVEL):	$(OBJ_LEVEL)
	c++ $(CPPFLAGS) $(OBJ_LEVEL) -o $@

%.o:			%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_LEVEL)

fclean:			clean
	rm -f $(NAME_LEVEL)

re:				fclean all

.PHONY: all clean fclean re