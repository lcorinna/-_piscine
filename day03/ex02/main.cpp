#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	mike("Mike");
	FragTrap	jo("Jo");
	std::cout << std::endl;
	
	mike.attack(jo.getName());
	jo.takeDamage(mike.getAtack_damage());
	jo.attack(mike.getName());
	mike.takeDamage(jo.getAtack_damage());
	std::cout << std::endl;
	
	mike.guardGate();
	mike.beRepaired(10);
	jo.highFivesGuys();
	jo.beRepaired(10);
	std::cout << std::endl;
	return 0;
}