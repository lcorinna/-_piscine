#include "AForm.hpp"

AForm::AForm() : \
_name("noName"), _signed(0), _gradeSignet(150), _gradeExecute(150) {
	std::cout << "Default constructor AForm called" << std::endl;
}

AForm::AForm(std::string name, const int gradeSignet, const int gradeExecute) : \
_name(name),  _signed(false), _gradeSignet(checkGrade(gradeSignet)), _gradeExecute(checkGrade(gradeExecute)) {
	std::cout << "Custom constructor AForm called" << std::endl;
}

AForm::AForm(const AForm &other) :
_name(other._name), _gradeSignet(other._gradeSignet), _gradeExecute(other._gradeExecute) {
	std::cout << "Copy constructor AForm called" << std::endl;
	_signed = other._signed; 
}

AForm& AForm::operator=(const AForm &other) {
	std::cout << "Copy assignment operator AForm called" << std::endl;
	_signed = other._signed;
	return *this;
}

AForm::~AForm() {
	std::cout << "Destructor AForm called" << std::endl;
}

int AForm::checkGrade(int grade)
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

std::string	AForm::getName() const {
	return _name;
}

bool	AForm::getSignet() const {
	return _signed;
}

int	AForm::getGradeSignet() const {
	return _gradeSignet;
}

int	AForm::getGradeExecute() const {
	return _gradeExecute;
}

void	AForm::beSigned(Bureaucrat &chel) {
	try {
		if (chel.getGrade() > _gradeSignet)
			throw GradeTooLowException();
		this->_signed = true;
		std::cout << "Bureaucrat: " << chel.getName() << " signed" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& ost, const AForm& form)
{
	ost <<"AForm: " << form.getName();
	if (form.getSignet())
		ost << " - is signed" <<std::endl;
	else
		ost << " couldn’t sign" <<std::endl;
	std::cout << "Grade sign: "<< form.getGradeSignet() << std::endl;
	std::cout << "Grade execute: "<< form.getGradeExecute() << std::endl;
	return ost;
}