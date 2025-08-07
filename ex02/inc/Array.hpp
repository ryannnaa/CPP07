#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>

template<typename T>
class Array
{
	private:
		T *_elements;
		std::size_t _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();
};
