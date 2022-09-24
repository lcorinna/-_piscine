#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default constructor Animal called" << std::endl;
	_type = "Indefinite";
}

Animal::Animal(const Animal &other) {
	std::cout << "Copy constructor Animal called" << std::endl;
	_type = other._type;
}

Animal&	Animal::operator=(const Animal &other) {
	std::cout << "Copy assignment operator Animal called" << std::endl;
	this->_type = other._type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Destructor Animal called" << std::endl;
}

void	Animal::setType(std::string type) {
	_type = type;
}

std::string	Animal::getType() const { return _type; }

void	Animal::makeSound(void) const {
	std::cout << "Hello, world!" << std::endl;
}