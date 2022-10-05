#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeSignet;
	const int			_gradeExecute;
	
	int	checkGrade(int grade);

public:
	Form();
	Form(std::string name, const int gradeSignet, const int _gradeExecute);
	Form(const Form &other);
	Form& operator=(const Form &other);
	~Form();

	std::string	getName() const ;
	bool	getSignet() const ;
	int	getGradeSignet() const ;
	int	getGradeExecute() const ;

	void	beSigned(Bureaucrat &chel);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return ("The form level is too high");
			}
	} ;

	class GradeTooLowException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return ("The form level is too low");
			}
	} ;
} ;

std::ostream& operator<<(std::ostream &ost, const Form& form);

#endif