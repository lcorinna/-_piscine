#include "Harl.hpp"

Harl::Harl() {
	array_func[0] = &Harl::debug;
	array_func[1] = &Harl::info;
	array_func[2] = &Harl::warning;
	array_func[3] = &Harl::error;
	array_func[4] = &Harl::invalid_level;
	levels[0] = "debug";
	levels[1] = "info";
	levels[2] = "warning";
	levels[3] = "error";
	levels[4] = "invalid level";
}

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

void	Harl::invalid_level(void) {
	std::cout << "Invalid level" << std::endl;
}

void	Harl::complain(std::string level) {
	int index = 0;
	while (index < 4 && level != levels[index]) {
		++index;
	}
	(this->*array_func[index])();

}