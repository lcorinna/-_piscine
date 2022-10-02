#include "iter.hpp"

int	main(void) {
	std::string	array[] = {"LOVE", "DEATH", "ROBOTS"};

	::iter(array, calculateElements(array), &func);
	std::cout << std::endl;

	char	array1[] = "Hello";
	
	::iter(array1, calculateElements(array1), &func);
	std::cout << std::endl;

	int	array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    ::iter(array2, calculateElements(array2), &func);
	return 0;
}