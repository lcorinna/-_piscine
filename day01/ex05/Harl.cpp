#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special- ketchup burger. ";
	std::cout << "I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working ";
	std::cout << "here since last month." << std::endl;
}
void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level) {
	// &Harl.level();
	// Harl*	ptr[4];// = (&debug, &info, &warning, &error);
	// ptr[0] = &debug;
	// ptr[1].l
	debug();
	// int	i;
	// i = level.length();
	// while (i != )
}