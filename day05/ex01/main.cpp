#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
{
	Bureaucrat	chel("Petr", 13);
	Form		law("for weapons", 30, 100);
	
	std::cout << std::endl;
	std::cout << chel;
	
	std::cout << std::endl;
	std::cout << law;

	std::cout << std::endl;
	law.beSigned(chel);

	std::cout << std::endl;
	std::cout << law;
}
{
	std::cout << std::endl;
	Bureaucrat	chel("Semen", 55);
	Form		law("for candy", 2, 8);
	
	std::cout << std::endl;
	chel.signForm(law);
}
	return 0;
}