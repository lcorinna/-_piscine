#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "Default constructor WrongCat called" << std::endl;
	_type = "Who am I?";
}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "Copy constructor WrongCat called" << std::endl;
	_type = other._type;
}

WrongCat&	WrongCat::operator=(const WrongCat &other) {
	std::cout << "Copy assignment operator WrongCat called" << std::endl;
	this->_type = other._type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor WrongCat called" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "LOL KEK" << std::endl;
}