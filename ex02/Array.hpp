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
			data = new T;
		}
		Array<T>(unsigned int n)
		{
			std::cout << "unsigned int constructor" << std::endl;
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
			return(this->data[index]);
		}
		T &operator[](unsigned int index)
		{
			return(this->data[index]);
		}
		unsigned int size(void)
		{
			int i = 0;
			try
			{
				while(this->data[i])  // ca va trop loin
				{
					std::cout << i << std::endl;
					i++;
				}
			}
			catch (const std::out_of_range &oor)
			{
				std::cout << "a";
			}
			return(i);
		}
	private:
		T* data;
};

#endif