#include "Bureaucrat.hpp"

int	main(void) {
{
	Bureaucrat	chel("Valera", 13);
	std::cout << chel;
}
{
	std::cout << std::endl;
	Bureaucrat	chel("Borya", -23);
	std::cout << chel;
	std::cout << std::endl;
	Bureaucrat	chel2("Kolya", 323);
	std::cout << chel2.getName() << " : " << chel.getGrade() << std::endl;
}
{
	std::cout << std::endl;
	Bureaucrat	chel("Tom", 1);
	std::cout << chel;
	chel.upGrade();
	std::cout << chel;
	chel.downGrade();
	std::cout << chel;
}
	return 0;
}