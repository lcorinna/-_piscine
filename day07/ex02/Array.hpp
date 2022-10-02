#ifndef ARRAY_HPP
# define ARRAY_HPP

# define MAX_VAL 750

# include <iostream>
# include <ctime>
# include <cstdlib>

template<class Type>
class Array
{
private:
	Type*			_DynamicArray;
	unsigned int	_size;
public:
	Array<Type>() : _DynamicArray(NULL), _size(0) {
		std::cout << "Zero constructor" << std::endl;
	};
	Array<Type>(unsigned int n) {
		std::cout << "Size constructor" << std::endl;
		if (n == 0)
			_DynamicArray = NULL;
		else
			this->_DynamicArray = new Type[n]();
		this->_size = n;
	};
	Array<Type>(const Array<Type> &obj) {
		std::cout << "Copy constructor called" << std::endl;
		_size = obj._size;
		_DynamicArray = new Type[_size];
		for (unsigned int i = 0; i < _size; ++i)
			this->_DynamicArray[i] = obj._DynamicArray[i];
	};
	Array<Type> &operator=(const Array<Type> &obj) {
		std::cout << "Copy assignment operator Array called" << std::endl;
		this->_size = obj.size();
		for (unsigned int i = 0; i < this->_size; i++)
			this->_DynamicArray[i] = obj[i];
		return *this;
	};
	~Array<Type>() {
		if (this->_DynamicArray)
			delete [](this->_DynamicArray);
	};

	Type &operator[](const unsigned int index) const {
		if (index >= _size)
			throw std::range_error("Index out of bounds");
		return this->_DynamicArray[index];
	}

	int	size() const {
		return this->_size;
	};
};


#endif