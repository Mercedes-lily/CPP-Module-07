#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template < typename T >
class Array
{
	public:
		Array<T>(void)
		{
			std::cout << "default constructor" << std::endl;
			this->sizeArray = 1;
			data = new T;
		}
		Array<T>(unsigned int n)
		{
			std::cout << "unsigned int constructor" << std::endl;
			this->sizeArray = n;
			data = new T[n];
		}
		Array<T>(const Array<T> &src)
		{
			this->data = new T;
			for (int i = 0; src[i]; i++)
				this->data[i] = src.data[i];
		}
		Array<T> &operator=(const Array<T> &src) // deep copy
		{
			(void) src;
		}
		~Array<T>(void)
		{
			std::cout << "destructor" << std::endl;
			delete this->data;
		}
		const T &operator[](unsigned int index) const
		{
			if(index >= this->sizeArray || index < 0)
				throw(std::out_of_range("Out of Range"));
			return(this->data[index]);
		}
		T &operator[](unsigned int index)
		{
			if(index >= this->sizeArray || index < 0)
				throw(std::out_of_range("Out of Range"));
			return(this->data[index]);
		}
		unsigned int size(void)
		{
			return(this->sizeArray);
		}
	private:
		T* data;
		unsigned int sizeArray;
};

#endif