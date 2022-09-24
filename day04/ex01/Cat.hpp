#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Brain;

class Cat : public Animal {
private:
	Brain*	_mind;
public:
	Cat();
	Cat(const Cat &other);
	Cat&	operator=(const Cat &other);
	~Cat();

	void	makeSound(void) const;
} ;

#endif