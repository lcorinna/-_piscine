#ifndef WEAPON
# define WEAPON

# include <iostream>

class Weapon {
private:
	std::string	gun;
	std::string &gunRef;
public:
	Weapon();
	~Weapon();
	std::string	getType();
	void	setType();
}

#endif