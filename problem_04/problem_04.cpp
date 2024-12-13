

#include <iostream>

int palindrome ( int number )
{
    int revers = 0 ;
    int n = number ;

    while ( n > 0 )
        {
            revers *= 10 ;
            revers += n % 10 ;
            n /= 10 ;
        }

    return revers == number ;
}

int main ()
{
    int x = 0 , y = 0 , max = 0 , product ;

    for ( int i = 999 ; i >= 100 ; i -- )
        {
            for ( int j = i ; j >= 100 ; j -- )
                {
                    product = i * j ;

                    if ( palindrome ( product ) &&  ( product > max ) )
                        {
                            max = product ;
                            x = i ;
                            y = j ;
                        }
                }
        }

    std::cout << "\n\t 🖝  The largest palindrome is : "
              << max << " = " << x << " * " << y << std::endl ;

    return 0 ;
}