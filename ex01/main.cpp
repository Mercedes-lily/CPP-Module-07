#include "iter.hpp"
#include <string>
#include <iostream>

int main()
{
	int intarray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char chararray[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	iter(intarray, 10, is_even);
	iter(intarray, 10, print);
	iter(intarray, 10, square);
	iter(chararray, 10, is_even);
	iter(chararray, 10, print);
	iter(chararray, 10, square);
}