
#include <iostream>

long long binomial_coefficient ( int n , int k ) 
{
    if ( k > n - k )   
        k = n - k ;
    
    long long result = 1 ;
    for ( int i = 1 ; i <= k ; i ++ ) 
        result = result * ( n - i + 1 ) / i ;
    
    return result ; 
}

int main ()
{   
    std::cout << "\n\t 🖝  Number of routes through a ( 20 × 20 ) grid is : " 
              << binomial_coefficient ( 40 , 20 ) 
              << "\n\n\n" ;

    return 0 ;
}