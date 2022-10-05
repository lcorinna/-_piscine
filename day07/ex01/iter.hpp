#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<class Type>
void	func(const Type &a) {
	std::cout << a << std::endl;
}

template<class Type>
void	iter(Type* a,  size_t b, void f(const Type &)) {
	for (size_t i = 0; i < b; ++i) {
		f(a[i]);
	}
}

template <typename Type, std::size_t N>
std::size_t	calculateElements(const Type (&)[N]) {
	return N;
}

#endif

/*
•Первый параметр - это адрес массива.
•Второй - это длина массива.
•Третья - это функция, которая будет вызываться для каждого элемента массива.
*/