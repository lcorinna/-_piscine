#include "Span.hpp"

int	main(void) {
{
	Span	sp = Span(6);

	try {
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(6);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(0);
		std::cout << "min - " << sp.shortestSpan() << std::endl;
		std::cout << "max - " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
		sp.addNumber(94);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
{
	std::cout << std::endl;
	Span	sp1;

	try {
		sp1.addNumber(3);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
{
	std::cout << std::endl;
	Span	sp2 = Span(100);
	try {
	sp2.addMultipleNumbers(sp2.getN());
	// sp2.addMultipleNumbers(31); //mistake
	std::cout << "min - " << sp2.shortestSpan() << std::endl;
	std::cout << "max - " <<sp2.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
	return 0;
}