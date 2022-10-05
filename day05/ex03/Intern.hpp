#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern& other);
	Intern&	operator=(const Intern& other);
	~Intern();

	AForm*	makeForm(std::string name, std::string target);

	class FormNotFound : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Wrong name of form";
			}
	};
} ;

#endif