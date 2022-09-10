#ifndef PHONE_BOOK
# define PHONE_BOOK

# include "Contact.hpp"

class Phone_book {
private:
	Contact	contacts[8];
public:
	Phone_book(void);
	~Phone_book(void);
	Contact	*getContact();
};

#endif