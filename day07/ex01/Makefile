NAME_ITER	=	iter

ITER		=	main.cpp

OBJ_ITER	=	$(ITER:.cpp=.o)

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98


all:			$(NAME_ITER)

$(NAME_ITER):	$(OBJ_ITER)
	c++ $(CPPFLAGS) $(OBJ_ITER) -o $@

%.o:			%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_ITER)

fclean:			clean
	rm -f $(NAME_ITER)

re:				fclean all

.PHONY: 		all clean fclean re