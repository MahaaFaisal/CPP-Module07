#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

template <typename T>
class Array
{
	private:
		int _n;
		T *_array;
	
	public:
		Array()
		{
			_n = 0;
			_array = new T[0];
		}

		Array(unsigned int n)
		{	_n = n;
			_array = new T[n];
		}

		Array(Array &other)
		{
			_n = other._n;
			_array = new T[_n];
			for (int i  = 0; i < _n; i++)
				_array[i] = other._array[i];	
		}

		Array &operator=(Array &rhs)
		{
			delete [] _array;
			_n = rhs._n;
			_array = new T[_n];
			for (int i  = 0; i < _n; i++)
				_array[i] = rhs._array[i];
			return (*this);
		}

		T &operator[](int index)
		{
			if (index < 0 || index >= _n)
				throw(std::out_of_range("indexOutfRange"));
			return (_array[index]);
		}

		~Array() { delete [] _array; }
};
#endif