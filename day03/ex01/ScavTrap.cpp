#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default constructor ScavTrap called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_atack_damage = 20;
}

ScavTrap::ScavTrap(std::string	name) {
	std::cout << "Custom constructor ScavTrap called" << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_atack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_atack_damage = other._atack_damage;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "Copy assignment operator ScavTrap called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_atack_damage = other._atack_damage;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (_energy_points > 0 && _hit_points > 0) {
		std::cout << "ScavTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _atack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
		std::cout << this->_name << " does not have enough resources for the attack action" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (_hit_points > 0) {
		std::cout << "ScavTrap " << _name << " takes damage in the amount of ";
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

void	ScavTrap::beRepaired(unsigned int amount) {
	if (_energy_points > 0 && _hit_points > 0) {
		std::cout << "ScavTrap " << _name << " healing" << std::endl;
		this->_hit_points += amount;
		_energy_points--;
	}
	else
		std::cout << this->_name << " does not have enough resources for this action" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
