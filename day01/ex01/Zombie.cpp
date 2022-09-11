#include "Zombie.hpp"

Zombie::Zombie() { }

Zombie::~Zombie() {
	std::cout << "Zombie " << _name << " died" << std::endl;
}

std::string	Zombie::getName() const { return _name; }

void	Zombie::setName(std::string Name) {_name = Name; }

void	Zombie::announcement(void) {
	std::cout << _name <<  " BraiiiiiiinnnzzzZ..." << std::endl;
}	