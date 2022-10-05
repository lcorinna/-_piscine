#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("noName"), _grade(150) {
	std::cout << "Default constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	std::cout << "Custom constructor Bureaucrat called" << std::endl;
	try {
		this->setGrade(grade);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name) {
	std::cout << "Copy constructor Bureaucrat called" << std::endl;
	_grade = other._grade;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &other) {
	std::cout << "Copy assignment operator Bureaucrat called" << std::endl;
	_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor Bureaucrat called" << std::endl;
}

void	Bureaucrat::upGrade() {
	try {
		this->setGrade(--_grade);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::downGrade() {
	try {
		this->setGrade(++_grade);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

std::string	Bureaucrat::getName() const {
	return _name;
}

int			Bureaucrat::getGrade() const {
	return _grade;
}

void		Bureaucrat::setGrade(int grade) {
	_grade = 150;
	if (grade > 150) 
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

void	Bureaucrat::signForm(AForm &form) {
	if (form.getGradeSignet() < this->getGrade())
		std::cout << "Bureaucrat " << this->getName() << " is too low level to sign the form " << form.getName() << std::endl;
	else {
		if (!form.getSignet()) {
			form.beSigned(*this);
		} else
			std::cout << "Form " << form.getName() << " has already been signed" << std::endl;
	}
}

void	Bureaucrat::executeForm(const AForm& form) {
	try {
		form.executer(*this);
		std::cout << *this << " executed " << form;
	} catch(const std::exception& e) {
		std::cerr << *this << " couldn't execute " << form << ", because " << this->_name << " has " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &ost, const Bureaucrat &other)
{
	ost << other.getName() << " Bureaucrat grade: " << other.getGrade();
	return ost;
}
