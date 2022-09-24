#include "Dog.hpp"
#include "Cat.hpp"

int main() {
{
	std::cout << ">>>>>>>>>>TEST_1<<<<<<<<<<" << std::endl;
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	std::cout << std::endl;

	delete j;
	delete i;
	std::cout << std::endl;
	std::cout << ">>>>>>>>>>TEST_2<<<<<<<<<<" << std::endl;

	Cat tom;
	Cat kim(tom);
	std::cout << std::endl;
	
	std::cout << ">>>>>>>>>>TEST_3<<<<<<<<<<" << std::endl;
	Cat sem;
	sem = tom;
}
	std::cout << std::endl;
	std::cout << ">>>>>>>>>>TEST_4<<<<<<<<<<" << std::endl;
	Animal* array[4];
	for (int i = 0; i < 4; ++i) {
		if (i < 2)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; ++i) {
		delete array[i];
	}
	return 0; 
}