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
}