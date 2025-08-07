#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <cstring>

template <typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
};

template <typename T>
T min(T a, T b)
{
	return ((a <= b) ? a : b);
};

const std::string& min(const std::string& a, const std::string& b)
{
	return ((a <= b) ? a : b);
};

const char *min(const char *a, const char *b)
{
	if (!a && !b)
		return "";
	if (!a || !*a)
		return (b);
	if (!b || !*b)
		return (a);
	return ((std::strcmp(a, b) <= 0) ? a : b);
};

template <typename T>
T max(T a, T b)
{
	return ((a >= b) ? a : b);
};

const std::string& max(const std::string& a, const std::string& b)
{
	return ((a >= b) ? a : b);
};

const char *max(const char *a, const char *b)
{
	if (!a && !b)
		return "";
	if (!a || !*a)
		return (b);
	if (!b || !*b)
		return (a);
	return ((std::strcmp(a, b) >= 0) ? a : b);
};

#endif
