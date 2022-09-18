#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_raw_bits = 0;
}

Fixed::Fixed(int converted) {
	std::cout << "Int constructor called" << this << std::endl;
	_raw_bits = converted << _fractional;
}


Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called	" << this << std::endl;
	this->_raw_bits = other._raw_bits;
}

Fixed&	Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = other._raw_bits;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called	" << this << std::endl;
}

int	Fixed::getRawBits(void) const { 
	std::cout << "getRawBits member function called" << std::endl;
	return _raw_bits;
}

void	Fixed::setRawBits(int const raw) { _raw_bits = raw; }

// raw << 8

// Fixed	Fixed::operator+(const Fixed &two) {
// 	Fixed	new_elem;
// 	// Fixed	*new_elem;

// 	// new_elem = new Fixed;

// 	new_elem._integer = this->_integer + two._integer;
// 	return new_elem;
// }