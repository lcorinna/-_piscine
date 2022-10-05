#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm(NULL, 72, 45) {
	std::cout << "Default constructor RRF called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45) {
	std::cout << "Custom constructor RRF called" << std::endl;
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target) {
	std::cout << "Copy constructor RRF called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	std::cout << "Copy assignment operator RRF called" << std::endl;
	AForm::operator=(other);
	_target = other._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor RRF called" << std::endl;
}

void	RobotomyRequestForm::executer(const Bureaucrat& chel) const {
	try {
		if (this->getSignet() == false)
			throw FormIsNotSignedException();
		else if (this->getGradeExecute() < chel.getGrade())
			throw GradeTooLowException();
		else {
			srand(time(NULL));
			std::cout << "Br br brrrrr" << std::endl;
			if (rand() % 2 == 1)
				std::cout << this->_target << " has been robotomized" << std::endl;
			else
				std::cout << "Robotomy failed. Target: " << this->_target << std::endl;
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}