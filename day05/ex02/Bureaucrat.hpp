#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>
# include <fstream>
# include <string> 

# include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat&	operator=(const Bureaucrat &other);
	~Bureaucrat();

	void	upGrade();
	void	downGrade();

	std::string			getName() const;
	int					getGrade() const;
	void				setGrade(int grade);

	void	signForm(AForm &form);

	void	executeForm(const AForm& form);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("A bureaucrat cannot have a level higher than 1");
			}
	} ;

	class GradeTooLowException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return ("A bureaucrat cannot have a level below 150");
			}
	} ;
} ;

std::ostream &operator<<(std::ostream &ost, Bureaucrat const &obj);

#endif