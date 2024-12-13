

#include <iostream>

long largest_prime_factor ( long number )
{
    long max_prime = -1 ;

    while ( number % 2 == 0 )
        {
            max_prime = 2 ;
            number /= 2 ;
        }

    for ( long i = 3 ; i * i <= number ; i += 2 )
        {
            while ( number % i == 0 ) 
                {
                    max_prime = i ;
                    number /= i ;
                }
        }

    if ( number > 2 )
        max_prime = number ;
    
    return max_prime ;
}


int main ()
{
    long number = 600851475143 ;

    std::cout << "\n\t 🖝  Largest prime factor : " 
              << largest_prime_factor ( number )  
              << std::endl ;
              
    return 0 ;
}




        
 