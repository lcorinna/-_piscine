#include "Fixed.hpp"

int main(void) {
	// Fixed	a;
	// Fixed const	b(10);
	// Fixed const	c(42.42f);
	// Fixed const	d(b);

	// a = Fixed(1234.4321f);

	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	float	a = 5;
	// float	a = 42.42f;
	float	y = 1;
	std::cout << &y << std::endl;
	int		b = 255;
	int d = (int)a;

	printf("a - %f\n", a); //del
	printf("d - %d\n", d); //del
	printf("b - %d\n", b); //del
	b = b << 8;
	// a = a << 8;
	printf("a - %f\n", a); //del
	printf("b - %d\n", b); //del
	return 0;
}