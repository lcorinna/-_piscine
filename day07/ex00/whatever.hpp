#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<class Type>
Type	min(Type a, Type b) {
	if( a < b) {
		return a;
	}
	return b;
}

template<class Type>
Type	max(Type a, Type b) {
	if( a > b) {
		return a;
	}
	return b;
}

template<class Type>
void	swap(Type &a, Type &b) {
	Type	c;

	c = a;
	a = b;
	b = c;
}

// template <typename T>
// const T &max(const T&a, const T&b) {return (a > b) ? a : b;}

#endif