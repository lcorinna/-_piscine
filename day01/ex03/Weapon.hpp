#ifndef WEAPON
# define WEAPON

# include <iostream>

class Weapon {
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon(void);
	const	std::string	&getType();
	void	setType(std::string	type);
};

#endif