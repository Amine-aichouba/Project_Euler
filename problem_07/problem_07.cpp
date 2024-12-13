
#include <iostream>
#include <vector>

bool prime ( int x ) 
{
    for ( int i = 2 ; i * i <= x ; i ++ ) 
        {
            if ( x % i == 0 )
                return false ;
        }
    return true ;
}

int main () 
{
    int i = 0 , x = 2 ;
    
    std::vector <int> primes ;

    while ( i != 10001 ) 
        {
            if ( prime (x) ) 
                {
                    primes.push_back(x) ;
                    i ++ ;
                }
            x ++ ;
        }

    std::cout << "\n\t 🖝  The first 10001 prime numbers are :  " ;

    for ( int & p : primes ) 
        std::cout << "  " << p ;
    
    std::cout << std::endl ;

    return 0 ;
}
