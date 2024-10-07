#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

// this one should take a reference
template <typename T>
void	print(T temp)
{
	std::cout << temp << " ";
}

template <typename T>
void	iter(T array[], int arrLength, void(*print)(T))
{
	for (int i = 0; i < arrLength; i++)
		print(array[i]);
	std::cout << std::endl;
}

#endif