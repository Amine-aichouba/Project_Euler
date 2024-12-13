



#include <iostream>
#include <vector>
#include <cmath>

#define LIMIT 28123 

int sum_of_divisors ( int n ) 
{
    if ( n < 2 ) 
        return 0 ;

    int sum = 1 ; 
    int sqrt_n = static_cast < int > ( std::sqrt ( n ) ) ; 

    for ( int i = 2 ; i <= sqrt_n ; i ++ ) 
        {
            if ( n % i == 0 ) 
                {
                    sum += i ;
                    if ( i != n / i )     
                        sum += n / i ;
                }
        }
    return sum ;
}

bool is_abundant ( int n ) 
{
    return sum_of_divisors ( n ) > n ;
}

int main () 
{
    std::vector < int > abund ; 
    std::vector < bool > sum_abundant ( LIMIT + 1 , false ) ; 

    for ( int i = 1 ; i < LIMIT ; i ++ ) 
        {
            if ( is_abundant ( i ) ) 
                abund.push_back ( i ) ;   
        }

    for ( size_t i = 0 ; i < abund.size () ; i ++ ) 
        {
            for ( size_t j = i ; j < abund.size () ; j ++ ) 
                {
                    int sum = abund [i] + abund [j] ;
                    if ( sum <= LIMIT )  
                        sum_abundant [ static_cast < size_t > ( sum ) ] = true ;
                    else 
                        break ; 
                }
        }

    size_t total_sum = 0 ;

    for ( size_t i = 1 ; i <= LIMIT ; i ++ ) 
        {
            if ( !sum_abundant [i] ) 
                total_sum += i ;
        }

    std::cout << "\n\t 🖝  The sum of all the numbers that cannot be written as the sum of two abundant numbers : " 
              << total_sum 
              << "\n\n\n" ;
    return 0 ;
}