#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

template <typename T>
void	swap(T &a, T &b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T const &a, T const &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T	max(T const &a, T const &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif