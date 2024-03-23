#include "iter.hpp"
#include <string>
#include <iostream>

int main()
{
	int intarray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char chararray[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	iter(intarray, 10, is_even);
	for(int i = 0 ; i < 10; i ++)
		std::cout << intarray[i] << std::endl;
	iter(intarray, 10, print);
	for(int i = 0 ; i < 10; i ++)
		std::cout << intarray[i] << std::endl;
	iter(chararray, 10, is_even);
	for(int i = 0 ; i < 10; i ++)
		std::cout << chararray[i] << std::endl;
	iter(chararray, 10, print);
	for(int i = 0 ; i < 10; i ++)
		std::cout << chararray[i] << std::endl;
}