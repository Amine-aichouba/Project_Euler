

#include <iostream>

int gcd ( int a , int b ) 
{
    int temp ;

    while ( b != 0 ) 
        {
            temp = b ;
            b = a % b ;
            a = temp ;
        }

    return a ;
} 


int lcm ( int a , int b ) 
{
    return ( a * b ) / gcd ( a , b ) ;
}


int main () 
{
    int result = 1 ;
    for ( int i = 2 ; i <= 20 ; i ++ ) 
        result = lcm ( result , i ) ;
    
    std::cout << "\n\t 🖝  The smallest positive number evenly divisible by all of the numbers from 1 to 20 is : "
              << result 
              << std::endl ;
    return 0 ;
}
