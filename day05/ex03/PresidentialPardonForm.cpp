#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(NULL, 25, 5) {
	std::cout << "Default constructor PPF called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(_target, 25, 5) {
	std::cout << "Custom constructor PPF called" << std::endl;
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), _target(other._target) {
	std::cout << "Copy constructor PPF called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	std::cout << "Copy assignment operator PPF called" << std::endl;
	AForm::operator=(other);
	_target = other._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor PPF called" << std::endl;

}

void	PresidentialPardonForm::executer(const Bureaucrat& chel) const {
	try {
		if (this->getSignet() == false)
			throw FormIsNotSignedException();
		else if (this->getGradeExecute() < chel.getGrade())
			throw GradeTooLowException();
		else 
			std::cout << "Target " << this->_target << " was pardoned by Zaphod Beeblebrox" << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

