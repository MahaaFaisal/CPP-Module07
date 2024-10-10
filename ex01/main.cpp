#include <iostream>
#include "iter.hpp"

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    Awesome( Awesome &other ) : _n( other._n ) { return; }
    Awesome operator=( Awesome &rhs ){ _n = rhs._n; return *this; }
    ~Awesome(){ }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	std::string strArr[3] = {"printed ", "with ", "love "};
	Awesome tab2[5];

	iter( tab, 5, print< int> );
	iter( strArr, 3, print<std::string> );
	iter( tab2, 5, print<Awesome> );

	return 0;
}
