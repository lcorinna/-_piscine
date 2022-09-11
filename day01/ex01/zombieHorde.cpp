#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name) {
	Zombie	*result;

	result = new Zombie[N];
	for (int i = 0; i != N; ++i) {
		result[i].setName(name);
		result[i].announcement();
	}
	return result;
}