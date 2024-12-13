#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;

int main ()
{
   
    cpp_int power = pow ( cpp_int (2) , 1000 ) ;

    int sum = 0 ;

    while ( power > 0 )
        {
            sum +=  static_cast < int > ( power % 10 ) ;
            power /= 10 ;
        }
    std::cout << "\n\t 🖝  The sum of the digits of the number ( 2 ^ 1000 ) : "
              << sum 
              << "\n\n\n" ;

    return 0 ;
}