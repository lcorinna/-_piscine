#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
protected:
	std::string	_name;
	int	_hit_points;
	int	_energy_points; //энергия
	int	_atack_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap&	operator=(const ClapTrap &other);
	virtual ~ClapTrap();

	void	setName(std::string name);
	void	setHit_points(int hit);
	void	setEnergy_points(int energy);
	void	setAtack_damage(int attack);	

	std::string	getName();
	int	getHit_points();
	int	getEnergy_points();
	int	getAtack_damage();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
} ;

#endif