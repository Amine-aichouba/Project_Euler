

#include <iostream>

int main ()
{
    int s = 0 , x = 0 ;
    for ( int i = 1 ; i <= 100 ; i ++ )
        {
            s += i*i ;
            x += i ;
        }

    std::cout << "\n\t 🖝  The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. is "
              << ( x*x ) - s 
              << std::endl ;
}