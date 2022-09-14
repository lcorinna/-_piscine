#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &club) {
	_weapon = &club;
}

void	HumanB::attack() {
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " does not attack" << std::endl;
}