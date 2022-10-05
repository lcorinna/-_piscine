#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Default constructor Intern called" << std::endl;
}

Intern::Intern(const Intern& other) {
	std::cout << "Copy constructor Intern called" << std::endl;
	*this = other;
}

Intern&	Intern::operator=(const Intern& other) {
	std::cout << "Copy assignment operator Intern called" << std::endl;
	(void)other;
	return *this;
}

Intern::~Intern() {
	std::cout << "Destructor Intern called" << std::endl;
}

AForm*	Intern::makeForm(std::string name, std::string target) {
	AForm*	ptr = NULL;
	std::string	forms[3] = {"Shrubbery", "Robotomy", "Presidential"};
	int	i = 0;

	while (i < 3 && forms[i] != name)
		i++;
	switch (i) {
		case 0:
			ptr = new ShrubberyCreationForm(target);
			break;
		case 1:
			ptr = new RobotomyRequestForm(target);
			break;
		case 2:
			ptr =  new PresidentialPardonForm(target);
			break;
		default:
			throw FormNotFound();
	}
	std::cout << "Intern creates " << *ptr << std::endl;
	return ptr;
}
