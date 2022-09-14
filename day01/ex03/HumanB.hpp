#ifndef HUMANB
# define HUMANB

# include "Weapon.hpp"

class HumanB {
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &club);
	void	attack();
};

#endif