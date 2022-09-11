#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name);

int	main(void) {
	int		n = 42;
	Zombie	*horde;

	horde = zombieHorde(n, "Mr_Misix");
	delete [] horde;
	return 0;
}