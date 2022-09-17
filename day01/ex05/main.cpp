#include "Harl.hpp"

int	main(void) {
	Harl	test;

	test.complain("debug");
	std::cout << std::endl;
	test.complain("info");
	std::cout << std::endl;
	test.complain("warning");
	std::cout << std::endl;
	test.complain("error");
	std::cout << std::endl;
	test.complain("fdsghjklkjhgfdd");
	return 0;
}
