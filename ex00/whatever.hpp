#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T &x, T &y)
{
	T mid = x;
	x = y;
	y = mid;
}

template<typename T>
const T & min(T const &x, T const &y)
{
	if (x < y)
		return x;
	else
		return y;
}

template<typename T>
const T & max(T const &x, T const &y)
{
	if (x > y)
		return x;
	else
		return y;
}

#endif