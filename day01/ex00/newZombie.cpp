#include "Zombie.hpp"

Zombie	*newZombie(std::string name) {
	Zombie	*result;

	result = new Zombie;
	result->setName(name);
	result->announcement();
	return result;
}
