#ifndef __ARRAY_TPP__
# define __ARRAY_TPP__

#include "Array.hpp"

template <class T>
Array<T>::Array()
{
	_n = 0;
	_array = new T[0];
}

template <class T>
Array<T>::Array(unsigned int n)
{	_n = n;
	_array = new T[n];
}

template <class T>
Array<T>::Array(Array &other)
{
	_n = other._n;
	_array = new T[_n];
	for (int i  = 0; i < _n; i++)
		_array[i] = other._array[i];	
}

template <class T>
Array<T> &Array<T>::operator=(Array &rhs)
{
	delete [] _array;
	_n = rhs._n;
	_array = new T[_n];
	for (int i  = 0; i < _n; i++)
		_array[i] = rhs._array[i];
	return (*this);
}

template <class T>
T &Array<T>::operator[](int index)
{
	if (index < 0 || index >= _n)
		throw(std::out_of_range("indexOutfRange"));
	return (_array[index]);
}

template <class T>
size_t Array<T>::size() const
{
	return (_n);
}

template <class T>
Array<T>::~Array() { delete [] _array; }

#endif