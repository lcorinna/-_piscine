NAME_FIXED_POINT	=	fixed_point

FIXED_POINT			=	main.cpp Fixed.cpp

OBJ_FIXED_POINT		=	$(FIXED_POINT:.cpp=.o)

CPPFLAGS			=	-Wall -Wextra -Werror -std=c++98

all:					$(NAME_FIXED_POINT)

$(NAME_FIXED_POINT):	$(OBJ_FIXED_POINT)
	c++ $(CPPFLAGS) $(OBJ_FIXED_POINT) -o $@

%.o:					%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_FIXED_POINT)

fclean:			clean
	rm -f $(NAME_FIXED_POINT)

re:						fclean all

.PHONY: all clean fclean re