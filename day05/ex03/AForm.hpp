#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeSignet;
	const int			_gradeExecute;
	
	int	checkGrade(int grade);

public:
	AForm();
	AForm(std::string name, const int gradeSignet, const int _gradeExecute);
	AForm(const AForm &other);
	AForm& operator=(const AForm &other);
	virtual ~AForm();

	std::string	getName() const ;
	bool	getSignet() const ;
	int	getGradeSignet() const ;
	int	getGradeExecute() const ;

	void	beSigned(Bureaucrat &chel);

	virtual void	executer(const Bureaucrat& chel) const = 0;

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

	class FormIsNotSignedException : public std::exception{
		public:
			virtual const char	*what(void) const throw(){
				return ("Form is not signed!");
			}
	};
} ;

std::ostream& operator<<(std::ostream &ost, const AForm& form);

#endif