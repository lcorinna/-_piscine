#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_raw_bits = 0;
}

Fixed::Fixed(int converted) {
	std::cout << "Int constructor called" << std::endl;
	_raw_bits = converted << _fractional;
}

Fixed::Fixed(float converted) {
	std::cout << "Float constructor called" << std::endl;
	_raw_bits = roundf(converted * (2 * 2 * 2 * 2 * 2 * 2 * 2 * 2));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->_raw_bits = other._raw_bits;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const { 
	std::cout << "getRawBits member function called" << std::endl;
	return _raw_bits;
}

void	Fixed::setRawBits(int const raw) { _raw_bits = raw; }

Fixed&	Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = other._raw_bits;
	return *this;
}

std::ostream&	operator<<(std::ostream& flow, const Fixed& other) {
	flow << other.toFloat();
	return flow;
}

int	Fixed::toInt(void) const {
	return (_raw_bits >> _fractional);
}

float	Fixed::toFloat(void) const {
	return ((float)_raw_bits / (2 * 2 * 2 * 2 * 2 * 2 * 2 * 2));
}
