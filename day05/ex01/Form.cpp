#include "Form.hpp"

Form::Form() : \
_name("noName"), _signed(0), _gradeSignet(150), _gradeExecute(150) {
	std::cout << "Default constructor Form called" << std::endl;
}

Form::Form(std::string name, const int gradeSignet, const int gradeExecute) : \
_name(name),  _signed(false), _gradeSignet(checkGrade(gradeSignet)), _gradeExecute(checkGrade(gradeExecute)) {
	std::cout << "Custom constructor Form called" << std::endl;
}

Form::Form(const Form &other) :
_name(other._name), _gradeSignet(other._gradeSignet), _gradeExecute(other._gradeExecute) {
	std::cout << "Copy constructor Form called" << std::endl;
	_signed = other._signed; 
}

Form& Form::operator=(const Form &other) {
	std::cout << "Copy assignment operator Form called" << std::endl;
	_signed = other._signed;
	return *this;
}

Form::~Form() {
	std::cout << "Destructor Form called" << std::endl;
}

int Form::checkGrade(int grade)
{
	try {
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		else
			return grade;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return 150;
	}
}

std::string	Form::getName() const {
	return _name;
}

bool	Form::getSignet() const {
	return _signed;
}

int	Form::getGradeSignet() const {
	return _gradeSignet;
}

int	Form::getGradeExecute() const {
	return _gradeExecute;
}

void	Form::beSigned(Bureaucrat &chel) {
	try {
		if (chel.getGrade() > _gradeSignet)
			throw GradeTooLowException();
		this->_signed = true;
		std::cout << "Bureaucrat: " << chel.getName() << " signed" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& ost, const Form& form)
{
	ost <<"Form: " << form.getName();
	if (form.getSignet())
		ost << " - is signed" <<std::endl;
	else
		ost << " couldn’t sign" <<std::endl;
	std::cout << "Grade sign: "<< form.getGradeSignet() << std::endl;
	std::cout << "Grade execute: "<< form.getGradeExecute() << std::endl;
	return ost;
}