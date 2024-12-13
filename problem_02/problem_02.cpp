
#include <iostream>

int main () 
{
    int a = 1 , b = 2 , sum = 0 , temp ;

    while ( b < 4000000 ) 
        {
            if ( b % 2 == 0 ) 
                sum += b ;

            temp = b ;
            b = a + b ;
            a = temp ;
        }
    
    std::cout << "\n\t 🖝  Sum : " << sum << std::endl ;
    
    return 0 ;
}