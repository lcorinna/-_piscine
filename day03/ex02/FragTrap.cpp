#include "FragTrap.hpp"


FragTrap::FragTrap() {
	std::cout << "Default constructor FragTrap called" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_atack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Сustom constructor FragTrap called" << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_atack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "Copy constructor FragTrap called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_atack_damage = other._atack_damage;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	std::cout << "Copy assignment operator FragTrap called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_atack_damage = other._atack_damage;
	return *this;
}

FragTrap::~FragTrap() { 
	std::cout << "Destructor FragTrap called" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (_energy_points > 0 && _hit_points > 0) {
		std::cout << "FragTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _atack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
		std::cout << this->_name << " does not have enough resources for the attack action" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (_hit_points > 0) {
		std::cout << "FragTrap " << _name << " takes damage in the amount of ";
		std::cout  << amount << std::endl;
		if (_hit_points > 0){
			if ((unsigned int)_hit_points < amount)
				_hit_points = 0;
			else
				_hit_points -= amount;
		}
	}
	else
		std::cout << this->_name << " is already dead and can no longer take damage" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (_energy_points > 0 && _hit_points > 0) {
		std::cout << "FragTrap " << _name << " healing" << std::endl;
		this->_hit_points += amount;
		_energy_points--;
	}
	else
		std::cout << this->_name << " does not have enough resources for this action" << std::endl;

}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " give high five" << std::endl;
}
