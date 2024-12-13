#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision ;


int main () 
{
    cpp_int a = 1 ;
    cpp_int b = 1 ;
    int index = 2 ;

    while ( true ) 
        {
            cpp_int c = a + b ;
            index ++ ;
            if ( c.str().length() >= 1000 ) 
                {
                    std::cout << "\n\t 🖝  The index of the first term in the Fibonacci sequence to contain 1000 digits is: " 
                              << index 
                              << "\n\n\n" ;
                    break ; 
                }

            a = b ;
            b = c ;
        }

    return 0 ;
}
