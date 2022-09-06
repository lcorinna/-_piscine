#include <iostream>
using namespace std;

int main(void)
{
	int a, b = 0;

	cout << "Enter a and b: ";
	// std::cout << "Enter a and b: ";
	std::cin >> a >> b;

	cout << "a + b = " << (a + b) << endl;
	return 0;
}

//g++ -Wall -Wextra -Wno-used -Werror test2.cpp && ./a.out