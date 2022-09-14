#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void) {
	{
		Weapon club = Weapon("crude spiked clud");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	printf("\n\n"); //del
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}