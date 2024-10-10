#include <iostream>
#include "whatever.hpp"
#include "Utils.hpp"

int main( void )
{
	{
		Utils::printMsg ("--- trying with integers ---\n", "green");
		Utils::printMsg ("swap: ", "magenta");
		int i = 6;
		int j = 7;
		std::cout << "i: " << i << " j: " << j << std::endl;
		::swap(i, j);
		std::cout << "      i: " << i << " j: " << j << std::endl;
		Utils::printMsg ("min: ", "magenta");
		std::cout << ::min(i, j) << "\n";
		Utils::printMsg ("max: ", "magenta");
		std::cout << ::max(i, j) << "\n\n";
	}
	{
		Utils::printMsg ("--- trying with strings ---\n", "green");
		Utils::printMsg ("swap: ", "magenta");
		std::string i = "HI";
		std::string j = "BYE";
		std::cout << "i: " << i << " j: " << j << std::endl;
		::swap(i, j);
		std::cout << "      i: " << i << " j: " << j << std::endl;
		Utils::printMsg ("min: ", "magenta");
		std::cout << ::min(i, j) << "\n";
		Utils::printMsg ("max: ", "magenta");
		std::cout << ::max(i, j) << "\n\n";
	}
}