#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Brain;

class Cat : public AAnimal {
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