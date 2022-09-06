#ifndef PHONE_BOOK
# define PHONE_BOOK

# include "Contact.hpp"

class Phone_book {
private:
	Contact	contacts[8];
public:
	Phone_book();
	~Phone_book();
	Contact	*getContact();
};

#endif