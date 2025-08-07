#include "whatever.hpp"
#include <iostream>

//int main()
//{
//	int a = 5;
//	int b = 7;
//
//	std::cout << "[ value before swap ]\n" << "value of a:" << a << " value of b:" << b << std::endl;
//	swap(a,b);
//	std::cout << "[ value after swap ]\n" << "value of a:" << a << " value of b:" << b << std::endl;
//
//	std::string sa = "hello";
//	std::string sb = "goodbye";
//	std::cout << "[ value before swap ]\n" << "value of sa:" << sa << " value of sb:" << sb << std::endl;
//	swap(sa,sb);
//	std::cout << "[ value after swap ]\n" << "value of sa:" << sa << " value of sb:" << sb << std::endl;
//
//
//	return 0;
//}
//

int main() 
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	const char *e = "hello";
	const char *f = NULL;
	::swap(e, f);
	std::cout << "e = " << (e ? e : "NULL") << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	return 0;
}
