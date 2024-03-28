#ifndef ITER_HPP
# define ITER_HPP
#include <string>
#include <iostream>

template<typename A>
void iter(A *array, int size, void(f)(const A&))
{
	for (int i = 0; i < size; i++)
		f(array[i]);
}

template<typename A>
void is_even(const A& a)
{
	if(a % 2 == 0)
		std::cout << "Even" << std::endl;
	else
		std::cout << "Odd" << std::endl;
}

template<typename A>
void print(const A& a)
{
	std::cout << a << std::endl;
}

template<typename A>
void square(const A& a)
{
	A b = a * a;
	std::cout << b << std::endl;;
}

#endif