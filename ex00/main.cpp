#include "whatever.hpp"
#include <iostream>
#include <string>

int main()
{
	{
		int a = 22;
		int b = 17;
		swap<int>(a,b);
		std::cout << "a = " << a << " b = " << b << std::endl;
		std::cout << "min = " << (min<int>(a,b)) << std::endl;
		std::cout << "min = " << (max<int>(a,b)) << std::endl;
	}
	{
		float a = 22.34f;
		float b = 17.43f;
		swap<float>(a,b);
		std::cout << "a = " << a << " b = " << b << std::endl;
		std::cout << "min = " << (min<float>(a,b)) << std::endl;
		std::cout << "min = " << (max<float>(a,b)) << std::endl;
	}
	{
		char a = 'f';
		char b = '3';
		swap<char>(a,b);
		std::cout << "a = " << a << " b = " << b << std::endl;
		std::cout << "min = " << (min<char>(a,b)) << std::endl;
		std::cout << "min = " << (max<char>(a,b)) << std::endl;
	}
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
		return 0;
	}
}