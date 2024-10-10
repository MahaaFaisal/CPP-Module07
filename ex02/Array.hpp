#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__


template <typename T>
class Array
{
	private:
		int _n;
		T *_array;
	
	public:
		Array();
		Array(unsigned int n);
		Array(Array &other);
		Array &operator=(Array &rhs);
		~Array();
		T &operator[](int index);
		size_t size() const;
};

#include "Array.tpp"
#endif