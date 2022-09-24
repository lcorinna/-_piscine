#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Default constructor Dog called" << std::endl;
	_type = "Dog";
	_mind = new Brain;
}

Dog::Dog(const Dog &other) {
	std::cout << "Copy constructor Dog called" << std::endl;
	_type = other._type;
}

Dog&	Dog::operator=(const Dog &other) {
	std::cout << "Copy assignment operator Dog called" << std::endl;
	this->_type = other._type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Destructor Dog called" << std::endl;
	delete _mind;
}

void	Dog::makeSound(void) const {
	std::cout << "Dog goes wow" << std::endl;
}
