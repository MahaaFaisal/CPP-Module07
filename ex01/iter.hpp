#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

template <typename T>
void	print(const T &temp)
{
	std::cout << temp << " ";
}

template <typename T>
void	iter(T *array, const int arrLength, void(*print)(const T &))
{
	for (int i = 0; i < arrLength; i++)
		print(array[i]);
	std::cout << std::endl;
}

#endif