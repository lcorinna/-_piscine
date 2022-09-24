#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "Default constructor AAnimal called" << std::endl;
	_type = "Indefinite";
}

AAnimal::AAnimal(const AAnimal &other) {
	std::cout << "Copy constructor AAnimal called" << std::endl;
	_type = other._type;
}

AAnimal&	AAnimal::operator=(const AAnimal &other) {
	std::cout << "Copy assignment operator AAnimal called" << std::endl;
	this->_type = other._type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "Destructor AAnimal called" << std::endl;
}

void	AAnimal::setType(std::string type) {
	_type = type;
}

std::string	AAnimal::getType() const { return _type; }