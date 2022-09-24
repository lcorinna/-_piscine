#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	// AAAnimal human;
	// std::cout << human.getType() << std::endl;
	// human.makeSound();

	Cat	jojo;
	std::cout << jojo.getType() << std::endl;
	jojo.makeSound();
	std::cout << std::endl;

	Dog	pluto;
	std::cout << pluto.getType() << std::endl;
	pluto.makeSound();
	std::cout << std::endl;

	return 0; 
}
