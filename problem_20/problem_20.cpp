
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision ;

cpp_int factorial ( int x )
{
    if ( x == 1 || x == 0 )
        return 1 ;
    else 
        return x * factorial ( x - 1 ) ;
}

int main ()
{
    cpp_int factor = factorial ( 100 ) ;
    int sum = 0 ;

    while ( factor > 0 )
        {
            sum += static_cast < int > ( factor % 10 ) ;
            factor /= 10 ;
        }
    
    std::cout << "\n\t 🖝  The sum of the digits in the number ( 100 ! ) : "
              << sum 
              << "\n\n\n" ;
    return 0 ;
}