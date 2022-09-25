#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Default constructor Cat called" << std::endl;
	_type = "Cat";
	_mind = new Brain;
}

Cat::Cat(const Cat &other) {
	std::cout << "Copy constructor Cat called" << std::endl;
	_type = other._type;
	_mind = new Brain;
	for (int i = 0; i < 100; ++i) {
		_mind[i] = other._mind[i];
	}
}

Cat&	Cat::operator=(const Cat &other) {
	std::cout << "Copy assignment operator Cat called" << std::endl;
	this->_type = other._type;
	for (int i = 0; i < 100; ++i) {
		this->_mind[i] = other._mind[i];
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Destructor Cat called" << std::endl;
	delete _mind;
}

void	Cat::makeSound(void) const {
	std::cout << "Cat goes meow" << std::endl;
}
