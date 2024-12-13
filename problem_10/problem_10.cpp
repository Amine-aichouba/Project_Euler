

#include <iostream>


bool prime ( int x )
{
    for ( int j = 2 ; j*j <= x ; j ++ )
        {
            if ( x % j == 0 )
                return false ;                       
        }

    return true ;
}


int main ()
{
    int sum = 0 ;

    for ( int i = 2 ; i < 2000000 ; i ++ )
        {
            if ( prime (i) ) 
                sum += i ; 
        }
    
    std::cout << "\n\t 🖝  The sum of all the primes below two million : "
              << sum 
              << "\n\n\n" ;
    return 0 ;
}
