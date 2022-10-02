NAME_ARRAY	=	array

ARRAY		=	main.cpp

OBJ_ARRAY	=	$(ARRAY:.cpp=.o)

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98


all:			$(NAME_ARRAY)

$(NAME_ARRAY):	$(OBJ_ARRAY)
	c++ $(CPPFLAGS) $(OBJ_ARRAY) -o $@

%.o:			%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_ARRAY)

fclean:			clean
	rm -f $(NAME_ARRAY)

re:				fclean all

.PHONY: 		all clean fclean re

# valgrind --leak-check=full
#          --show-leak-kinds=all
#          --track-origins=yes
#          --verbose