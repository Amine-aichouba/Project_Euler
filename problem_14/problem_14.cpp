

#include <iostream>

long long longest_collatz_sequence ( long long n )
{
    long long length = 1 ;

    while ( n != 1 )
        {
            if ( n % 2 == 1 )
                n = 3 * n + 1 ;
            else 
                n /= 2 ;
            length ++ ;
        } 
    return length ;
}

int main ()
{
    long long number = 0 , max = 0 ;
 
    for ( long long i = 1 ; i < 1000000 ; i ++ )
        {     
            if ( longest_collatz_sequence ( i ) > max )
                {
                    max = longest_collatz_sequence ( i ) ;
                    number = i ;
                }
        }

    std::cout << "\n\t 🖝  The starting number under one million that produces the longest chain is : " << number    
              << "\n\n\t 🖝  The length of this chain is : " << max 
              << "\n\n\n" ;

    return 0 ;
}