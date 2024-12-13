

#include <iostream>
#include <cmath>

int div ( long long n )
{
    int count = 0 ;
    int x = static_cast <int> ( sqrtl ( n ) ) ;

    for ( int i = 1 ; i <= x ; i ++ ) 
        {
            if ( n % i == 0 ) 
                count += 2 ; 
        }

    return count ;
}

int main ()
{
    long long i = 0 , triangle_number = 0 ;

    while ( true )
        {
            triangle_number += i ;
            if ( div ( triangle_number ) > 500 ) 
                break ;
            
            i ++ ;

        }
    std::cout << "\n\t 🖝  The first triangle number with over 500 divisors is : " 
              << triangle_number 
              << "\n\n\n" ;
    return 0 ;
}
