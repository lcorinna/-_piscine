#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap	rebeka("Rebeka");
	std::cout << std::endl;

	ScavTrap	jane("Jane");

	// std::cout << rebeka.getAtack_damage() << std::endl;
	// std::cout << rebeka.getEnergy_points() << std::endl;
	// std::cout << rebeka.getHit_points() << std::endl;
	std::cout << std::endl;
	jane.attack(rebeka.getName());
	rebeka.takeDamage(jane.getAtack_damage());
	rebeka.attack(jane.getName());
	std::cout << std::endl;
	// std::cout << rebeka.getAtack_damage() << std::endl;
	// std::cout << rebeka.getEnergy_points() << std::endl;
	// std::cout << rebeka.getHit_points() << std::endl;
	rebeka.setHit_points(10);
	rebeka.attack(jane.getName());
	jane.takeDamage(rebeka.getAtack_damage());
	jane.guardGate();
	std::cout << std::endl;
	return 0;
}