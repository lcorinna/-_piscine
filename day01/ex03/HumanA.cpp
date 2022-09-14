#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _weapon(club){}

HumanA::~HumanA() {}

void	HumanA::attack() { 
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}