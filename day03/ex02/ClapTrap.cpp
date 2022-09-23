#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor ClapTrap called" << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_atack_damage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Сustom constructor ClapTrap called" << std::endl;
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_atack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy constructor ClapTrap called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_atack_damage = other._atack_damage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignment operator ClapTrap called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_atack_damage = other._atack_damage;
	return *this;
}

ClapTrap::~ClapTrap() { 
	std::cout << "Destructor ClapTrap called" << std::endl;
}

void	ClapTrap::setName(std::string name) { _name = name; }

void	ClapTrap::setHit_points(int hit) { _hit_points = hit; }

void	ClapTrap::setEnergy_points(int energy) { _energy_points = energy; }

void	ClapTrap::setAtack_damage(int attack) { _atack_damage = attack; }

std::string	ClapTrap::getName() { return _name; }

int	ClapTrap::getHit_points() { return _hit_points; }

int	ClapTrap::getEnergy_points() { return _energy_points; }

int	ClapTrap::getAtack_damage() { return _atack_damage; }


void	ClapTrap::attack(const std::string& target) {
	if (_energy_points > 0 && _hit_points > 0) {
		std::cout << "ClapTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _atack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
		std::cout << this->_name << " does not have enough resources for the attack action" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hit_points > 0) {
		std::cout << "ClapTrap " << _name << " takes damage in the amount of ";
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

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energy_points > 0 && _hit_points > 0) {
		std::cout << "ClapTrap " << _name << " healing" << std::endl;
		this->_hit_points += amount;
		_energy_points--;
	}
	else
		std::cout << this->_name << " does not have enough resources for this action" << std::endl;

}