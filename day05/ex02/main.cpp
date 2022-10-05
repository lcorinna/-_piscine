#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void) {
{
	Bureaucrat				chel("Peter", 140);
	Bureaucrat				chel2("Pakrer", 125);
	ShrubberyCreationForm	form("Garden");
	std::cout << std::endl;

	chel.signForm(form);
	chel2.executeForm(form);
	std::cout << std::endl;
}
{
	std::cout << "_____________________________________" << std::endl;
	Bureaucrat				chel("Christopher", 24);
	Bureaucrat				chel2("Nolan", 3);
	PresidentialPardonForm	form("Top secret");
	std::cout << std::endl;

	chel.signForm(form);
	chel2.executeForm(form);
	std::cout << std::endl;
}
{
	std::cout << "_____________________________________" << std::endl;
	Bureaucrat			chel("Nancy", 59);
	Bureaucrat			chel2("Sid", 33);
	RobotomyRequestForm	form("Jarvis");
	std::cout << std::endl;

	chel.signForm(form);
	chel2.executeForm(form);
	std::cout << std::endl;
}
{
	std::cout << "_____________________________________" << std::endl;
	Bureaucrat	chel("Volodya", 150);
	{
		std::cout << "_____________________________________" << std::endl;
		PresidentialPardonForm	form1("Not in the teeth");
		std::cout << std::endl;
		chel.signForm(form1);
		chel.executeForm(form1);
		std::cout << std::endl;
	}
	{
		std::cout << "_____________________________________" << std::endl;
		ShrubberyCreationForm	form2("Stone Forest");
		std::cout << std::endl;
		chel.signForm(form2);
		chel.executeForm(form2);
		std::cout << std::endl;
	}
	{
		std::cout << "_____________________________________" << std::endl;
		RobotomyRequestForm		form3("Robot Alyosha");
		std::cout << std::endl;
		chel.signForm(form3);
		chel.executeForm(form3);
		std::cout << std::endl;
	}
}
	return 0;
}