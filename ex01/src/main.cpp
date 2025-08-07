#include "iter.hpp"
#include <iostream>
#include <cstddef>

// Read-only function for any printable type
template <typename T>
void printElem(const T& x) {
	std::cout << x << " ";
}

// Modifies int in-place
void increment(int& x) {
	x += 1;
}

// Modifies double in-place
void square(double& x) {
	x *= x;
}

// Functor (object that acts like a function)
struct AddExclamation {
	void operator()(std::string& s) const {
		s += "!";
	}
};

int main() {
	// 1. Non-const int array (modifying)
	int intArr[] = {1, 2, 3, 4};
	std::cout << "Original int array: ";
	iter(intArr, 4, printElem<int>);
	std::cout << "\nAfter incrementing: ";
	iter(intArr, 4, increment);
	iter(intArr, 4, printElem<int>);
	std::cout << "\n\n";

	// 2. Const int array (read-only)
	const int constIntArr[] = {10, 20, 30};
	std::cout << "Const int array: ";
	iter(constIntArr, 3, printElem<int>);
	// iter(constIntArr, 3, increment); // ❌ won't compile — cannot modify const

	std::cout << "\n\n";

	// 3. Non-const double array (modifying)
	double doubleArr[] = {1.5, 2.0, 3.0};
	std::cout << "Original double array: ";
	iter(doubleArr, 3, printElem<double>);
	std::cout << "\nAfter squaring: ";
	iter(doubleArr, 3, square);
	iter(doubleArr, 3, printElem<double>);
	std::cout << "\n\n";

	// 4. Const double array (read-only)
	const double constDoubleArr[] = {2.5, 4.0};
	std::cout << "Const double array: ";
	iter(constDoubleArr, 2, printElem<double>);
	std::cout << "\n\n";

	// 5. std::string array with functor
	std::string strArr[] = {"Hello", "World"};
	std::cout << "Original string array: ";
	iter(strArr, 2, printElem<std::string>);
	std::cout << "\nAfter AddExclamation: ";
	iter(strArr, 2, AddExclamation());
	iter(strArr, 2, printElem<std::string>);
	std::cout << "\n\n";

	// 6. Const std::string array (read-only)
	const std::string constStrArr[] = {"Read", "Only"};
	std::cout << "Const string array: ";
	iter(constStrArr, 2, printElem<std::string>);
	// iter(constStrArr, 2, AddExclamation()); // ❌ won't compile — cannot modify const

	std::cout << "\n";

	return 0;
}

