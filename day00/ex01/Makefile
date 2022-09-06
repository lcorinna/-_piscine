NAME_PHONE_BOOK		=	PhoneBook

PHONE_BOOK			=	main.cpp Phone_book.cpp Contact.cpp

OBJ_PHONE_BOOK		=	$(PHONE_BOOK:.cpp=.o)

CPPFLAGS			=	-Wall -Wextra -Werror -std=c++98

all:				$(NAME_PHONE_BOOK)

$(NAME_PHONE_BOOK):	$(OBJ_PHONE_BOOK)
	g++ $(CPPFLAGS) $(OBJ_PHONE_BOOK) -o $@

%.o:				%.cpp Phone_book.hpp Contact.hpp Makefile
	g++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_PHONE_BOOK)

fclean:				clean
	rm -f $(NAME_PHONE_BOOK)

re:					fclean all

.PHONY: all clean fclean re