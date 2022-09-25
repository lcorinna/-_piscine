#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Default constructor Dog called" << std::endl;
	_type = "Dog";
	_mind = new Brain;
}

Dog::Dog(const Dog &other) {
	std::cout << "Copy constructor Dog called" << std::endl;
	_type = other._type;
	_mind = new Brain;
	for (int i = 0; i < 100; ++i) {
		_mind[i] = other._mind[i];
	}
}

Dog&	Dog::operator=(const Dog &other) {
	std::cout << "Copy assignment operator Dog called" << std::endl;
	this->_type = other._type;
	for (int i = 0; i < 100; ++i) {
		this->_mind[i] = other._mind[i];
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Destructor Dog called" << std::endl;
	delete _mind;
}

void	Dog::makeSound(void) const {
	std::cout << "Dog goes wow" << std::endl;
}
