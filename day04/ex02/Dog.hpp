#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Brain;

class Dog : public AAnimal {
private:
	Brain*	_mind;
public:
	Dog();
	Dog(const Dog &other);
	Dog&	operator=(const Dog &other);
	~Dog();

	void	makeSound(void) const;
} ;

#endif