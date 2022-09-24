#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal {
protected:
	std::string	_type;
public:
	AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal&	operator=(const AAnimal &other);
	virtual ~AAnimal();

	void	setType(std::string type);
	std::string	getType() const;

	virtual void	makeSound(void) const = 0;
} ;

#endif

/*
"чисто" виртуальный метод - это метод который не имеет какой-либо реализации

класс считается абстрактный, если в нем есть хотя бы один "чисто" виртуальный метод

в абстрактном классе также могут быть виртуальные методы с реализацией,
которые будут работать в наследниках
*/