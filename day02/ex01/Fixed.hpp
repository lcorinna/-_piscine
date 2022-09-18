#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int					_raw_bits;
	static const int	_fractional = 8;
public:
	Fixed();
	Fixed(int converted);
	// Fixed(float converted);
	Fixed(const Fixed &other);
	Fixed&	operator=(const Fixed &other);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	// float	toFloat( void ) const;
	// int		toInt( void ) const;
} ;

#endif