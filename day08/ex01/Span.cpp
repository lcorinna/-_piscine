#include "Span.hpp"

Span::Span() {
	std::cout << "Default constructor Span called" << std::endl;
	_N = 0;
}

Span::Span(int n) {
	std::cout << "Custom constructor Span called" << std::endl;
	_N = n;
}

Span::Span(const Span& other) {
	std::cout << "Copy constructor Span called" << std::endl;
	_N = other._N;
}

Span&	Span::operator=(const Span& other) {
	std::cout << "Copy assignment operator Span called" << std::endl;
	this->_N = other._N;
	this->_array = other._array;
	return *this;
}

Span::~Span() {
	std::cout << "Destructor Span called" << std::endl;
}

void	Span::addNumber(unsigned int i) {
	if (_array.size() == _N)
		throw std::range_error("There's no more room");
	this->_array.push_back(i);
}

int	Span::shortestSpan() {
	if (_array.size() < 2)
		throw std::logic_error("The number of elements is not enough for the operation shortestSpan");

	int	min = INT_MAX;
    int tmp;

    std::sort(_array.begin(), _array.end());
	for (unsigned int i = 0; i < _array.size() - 1; ++i)
    {
        tmp = _array[i + 1] - _array[i];
        if (tmp < min)
            min = tmp;
    }
	return min;
}

int	Span::longestSpan() {
	if (_array.size() < 2)
		throw std::logic_error("The number of elements is not enough for the operation longestSpan");
	
	int	max = this->_array[0];
	int	min = max;
	int	size = this->_array.size();

	for (int i = 0; i < size - 1; ++i) {
		if (this->_array[i] > max)
			max = this->_array[i];
	}
	for (int i = 0; i < size - 1; ++i) {
		if(this->_array[i] < min)
			min = this->_array[i];
	}
	max = max - min;
	return max;
}

void	Span::addMultipleNumbers(unsigned int i){
	if (i > _N)
		throw std::logic_error("The operation \"addMultipleNumbers\" cannot be performed");
	srand(time(NULL));
	while (i-- > 0)
		addNumber(rand());
}

unsigned int	Span::getN(){
	return _N;
}
