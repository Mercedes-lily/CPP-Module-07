#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template < typename T >
class Array
{
	public:
		Array<T>(void) : _size(0)  //ok
		{
			this->_data = new T[this->_size];
		}

		Array<T>(unsigned int n) : _size (n)  //ok
		{
			T * a = new T();
			this->_data = new T[n];
			for(unsigned int i = 0; i < n; i++)
				this->_data[i] = *a;
			delete a;
		}

		Array<T>(const Array<T> &src)
		{
			this->_size = src.size();
			this->_data = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i ++)
				this->_data[i] = src._data[i];
		}

		Array<T> &operator=(const Array<T> &src) // deep copy
		{
			delete this->_data;
			this->_size = src.size();
			this->_data = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i ++)
				this->_data[i] = src._data[i];
			return *this;
		}

		~Array<T>(void)  //ok
		{
			delete [] this->_data;
		}

		const T &operator[](unsigned int index) const  //ok
		{
			if(index >= this->_size || index < 0)
				throw(std::out_of_range("Out of Range"));
			return(this->_data[index]);
		}

		T &operator[](unsigned int index) //ok
		{
			if(index >= this->_size || index < 0)
				throw(std::out_of_range("Out of Range"));
			return(this->_data[index]);
		}

		unsigned int size(void) const //ok
		{
			return(this->_size);
		}

	private:
		T* _data;
		unsigned int _size;
};

#endif