#include "Mutant.hpp"

int	main() {
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.push(42);
	MutantStack<int>::iterator	it = mstack.begin();
	// MutantStack<int>::iterator	ite = mstack.end();
	++it;
	--it;
	--it;
	while (++it != mstack.end())
		std::cout << *it << std::endl;
	return 0;
}
