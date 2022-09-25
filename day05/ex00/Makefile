NAME_BUREAUCRAT		=	Bureaucrat

BUREAUCRAT			=	main.cpp Bureaucrat.cpp

OBJ_BUREAUCRAT		=	$(BUREAUCRAT:.cpp=.o)

CPPFLAGS			=	-Wall -Wextra -Werror -std=c++98


all:				$(NAME_BUREAUCRAT)

$(NAME_BUREAUCRAT):	$(OBJ_BUREAUCRAT)
	c++ $(CPPFLAGS) $(OBJ_BUREAUCRAT) -o $@

%.o:				%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_BUREAUCRAT)

fclean:				clean
	rm -f $(NAME_BUREAUCRAT)

re:					fclean all

.PHONY: 			all clean fclean re