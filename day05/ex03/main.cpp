#include "Intern.hpp"

int	main(void) {
{
	Bureaucrat	chel("Manhattan", 1);
	Intern		someRandomIntern;
	AForm*		ptr = NULL;
	std::cout << std::endl;

	try {
		ptr = someRandomIntern.makeForm("Presidential", "target");
		std::cout << *ptr << std::endl << std::endl;
		chel.signForm(*ptr);
		ptr->executer(chel);
		delete ptr;	
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}
{
	std::cout << std::endl;
	Bureaucrat	chel("Mumbai", 150);
	Intern		someRandomIntern;
	AForm*		ptr = NULL;
	std::cout << std::endl;

	try {
		ptr = someRandomIntern.makeForm("Dima Yakovlev 's Law", "target");
		std::cout << *ptr << std::endl << std::endl;
		chel.signForm(*ptr);
		ptr->executer(chel);
		delete ptr;	
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}
	return 0;
}