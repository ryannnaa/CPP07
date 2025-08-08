#include <stdexcept>

template<typename T>
Array<T>::Array()
	: _elements(NULL), _size(0)
{}

template<typename T>
Array<T>::Array(unsigned int n)
	: _size(n)
{
	_elements = new T[n]();
}

template<typename T>
Array<T>::Array(const Array& other)
	: _size(other._size)
{
	_elements = new T[_size]();
	for (std::size_t i = 0; i < _size; i++)
	{
		_elements[i] = other._elements[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] _elements;
		_size = other._size;
		_elements = new T[_size]();
		for (std::size_t i = 0; i < _size; i++)
		{
			_elements[i] = other._elements[i];
		}
	}
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	delete[] _elements;
}

template<typename T>
T& Array<T>::operator[](std::size_t i)
{
	if (i >= _size)
		throw std::out_of_range("Invalid index range");
	return (_elements[i]);
}

template<typename T>
const T& Array<T>::operator[](std::size_t i) const
{
	if (i >= _size)
		throw std::out_of_range("Invalid index range");
	return (_elements[i]);
}

template<typename T>
std::size_t Array<T>::size() const
{
	return (_size);
}
