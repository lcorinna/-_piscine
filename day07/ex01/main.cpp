#include "iter.hpp"

int	main(void) {
	std::string	array[] = {"LOVE", "DEATH", "ROBOTS"};

	::iter(array, calculateElements(array), func);
	std::cout << std::endl;

	char	array1[] = "Hello";
	
	::iter(array1, calculateElements(array1), func);
	std::cout << std::endl;

	int	array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    ::iter(array2, calculateElements(array2), func);
	return 0;
}

// class Awesome
// {
// 	public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
// 	private:
// 	int _n;
// };
// std::ostream&	operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print(T const& x) { std::cout << x << std::endl; return;}

// int	main() {
// 	int		tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome	tab2[5];

// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);
// 	return 0;
// }