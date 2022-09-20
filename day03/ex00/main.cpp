#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	john("John");
	ClapTrap	sweater("sweater");
	ClapTrap	anna(john);
	ClapTrap	bob;
	std::cout << std::endl;
	
	bob = anna;
	anna.setName("Anna");
	bob.setName("Bob");
	std::cout << std::endl;

	john.attack("sweater");
	sweater.takeDamage(john.getAtack_damage());
	sweater.beRepaired(1);
	std::cout << std::endl;

	for (int i = 0; i < 11; ++i){
		anna.attack("bob");
		bob.takeDamage(anna.getAtack_damage());
		std::cout << std::endl;
	}
	return 0;
}