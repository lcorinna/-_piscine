#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void){
	Zombie *ill;

	ill = newZombie("David");
	randomChump("Robert");
	delete ill;
	return 0;
}
