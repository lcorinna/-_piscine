#include "Zombie.hpp"

Zombie::Zombie() { }

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " died" << std::endl;
}

std::string	Zombie::getName() { return name; }

void	Zombie::setName(std::string Name) {name = Name; }

void	Zombie::announcement(void) {
	std::cout << name <<  " BraiiiiiiinnnzzzZ..." << std::endl;
}