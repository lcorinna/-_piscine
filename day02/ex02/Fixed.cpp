#include "Fixed.hpp"

Fixed::Fixed() {
	// std::cout << "Default constructor called" << std::endl;
	_raw_bits = 0;
}

Fixed::Fixed(int converted) {
	// std::cout << "Int constructor called" << std::endl;
	_raw_bits = converted << _fractional;
}

Fixed::Fixed(float converted) {
	// std::cout << "Float constructor called" << std::endl;
	_raw_bits = roundf(converted * (2 * 2 * 2 * 2 * 2 * 2 * 2 * 2));
}

Fixed::Fixed(const Fixed &other) {
	// std::cout << "Copy constructor called" << std::endl;
	this->_raw_bits = other._raw_bits;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const { 
	// std::cout << "getRawBits member function called" << std::endl;
	return _raw_bits;
}

void	Fixed::setRawBits(int const raw) { _raw_bits = raw; }

Fixed&	Fixed::operator=(const Fixed &other) {
	// std::cout << "Copy assignment operator called" << std::endl;
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
	return ((float)_raw_bits / (2 * 2 * 2 * 2 * 2 * 2 * 2 * 2)); //256
}

bool	Fixed::operator==(const Fixed &other) {
	if (this->_raw_bits == other._raw_bits)
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed &other) {
	return (this->_raw_bits != other._raw_bits);
}

bool	Fixed::operator>(const Fixed &other) {
	return (this->_raw_bits > other._raw_bits);
}
bool	Fixed::operator<(const Fixed &other) {
	return (this->_raw_bits < other._raw_bits);
}
bool	Fixed::operator>=(const Fixed &other) {
	return (this->_raw_bits >= other._raw_bits);
}
bool	Fixed::operator<=(const Fixed &other) {
	return (this->_raw_bits <= other._raw_bits);
}

Fixed	Fixed::operator+(const Fixed &other) {
	Fixed	tmp;

	tmp._raw_bits = this->_raw_bits + other._raw_bits;
	return tmp;
}

Fixed	Fixed::operator-(const Fixed &other) {
	Fixed	tmp;

	tmp._raw_bits = this->_raw_bits - other._raw_bits;
	return tmp;
}

Fixed	Fixed::operator*(const Fixed &other) {
	Fixed	tmp;

	tmp._raw_bits = (this->_raw_bits * other._raw_bits) / 256;
	return tmp;
}

Fixed	Fixed::operator/(const Fixed &other) {
	Fixed	tmp;

	tmp._raw_bits = (this->_raw_bits * 256) / other._raw_bits;
	return tmp;
}

Fixed&	Fixed::operator++() {
	this->_raw_bits++;
	return *this;
}

Fixed&	Fixed::operator--() {
	this->_raw_bits--;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	
	this->_raw_bits++;
	return tmp;
}

Fixed	Fixed::  operator--(int) {
	Fixed	tmp(*this);
	
	this->_raw_bits++;
	return tmp;
}

Fixed&		Fixed::min(Fixed& a, Fixed &b) {
	if (a < b)
		return a;
	else
		return b;
}

Fixed&		Fixed::max(Fixed& a, Fixed &b) {
	if (a > b)
		return a;
	else
		return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
	if (a._raw_bits < b._raw_bits)
		return a;
	else
		return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
	if (a._raw_bits > b._raw_bits)
		return a;
	else
		return b;
}
