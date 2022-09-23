#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
protected:
	std::string	_type;
public:
	Animal();
	Animal(const Animal &other);
	Animal&	operator=(const Animal &other);
	~Animal();

	void	setType(std::string name);
	std::string	getType();

	makeSound();
} ;

#endif