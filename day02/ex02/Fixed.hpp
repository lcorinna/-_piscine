#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int					_raw_bits;
	static const int	_fractional = 8;
public:
	Fixed();
	Fixed(int converted);
	Fixed(float converted);
	Fixed(const Fixed &other);
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed&	operator=(const Fixed &other);
	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator==(const Fixed &other);
	bool	operator!=(const Fixed &other);
	bool	operator>(const Fixed &other);
	bool	operator<(const Fixed &other);
	bool	operator>=(const Fixed &other);
	bool	operator<=(const Fixed &other);

	Fixed	operator+(const Fixed &other);
	Fixed	operator-(const Fixed &other);
	Fixed	operator*(const Fixed &other);
	Fixed	operator/(const Fixed &other);

	Fixed&	operator++(); //++i префиксная
	Fixed&	operator--();
	Fixed	operator--(int);
	Fixed	operator++(int); //i++ постфиксная

	static Fixed&	min(Fixed& a, Fixed &b);
	static Fixed&	max(Fixed& a, Fixed &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
} ;

std::ostream&	operator<<(std::ostream& flow, const Fixed& other);

#endif
