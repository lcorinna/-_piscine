#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Default constructor WrongAnimal called" << std::endl;
	_type = "Indefinite";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
	_type = other._type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
	this->_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

void	WrongAnimal::setType(std::string type) {
	_type = type;
}

std::string	WrongAnimal::getType() const { return _type; }

void	WrongAnimal::makeSound(void) const {
	std::cout << "Ribbit-ribbit" << std::endl;

}