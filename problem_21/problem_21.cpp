

#include <iostream>


int sum_of_divisors ( int n )
{
    int sum = 0 ;
    for ( int i = 1 ; i < n ; i ++ )
        {
            if ( n % i == 0 )
                sum += i ;
        }
    return sum ;
}

bool amicable_numbers ( int a , int b )
{
    return ( a != b ) && sum_of_divisors ( a ) == b && sum_of_divisors ( b ) == a  ;
}


int main ()
{
    int sum = 0 ;

    for ( int i = 1 ; i <= 10000 ; i ++ )
        {
            int j = sum_of_divisors ( i ) ;
                if ( j > i && j < 10000 && amicable_numbers ( i , j ) )
                    sum += ( i + j ) ;           
        }

    std::cout << "\n\t 🖝  the sum of all the amicable numbers under ( 10000 ) : "
              << sum
              << "\n\n\n" ;
    return 0 ;
}