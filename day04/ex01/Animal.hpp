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
	virtual ~Animal();

	void	setType(std::string type);
	std::string	getType() const;

	virtual void	makeSound(void) const;
} ;

#endif