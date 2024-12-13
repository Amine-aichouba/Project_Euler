



#include <iostream>
#include <algorithm>


int main () 
{
    std::string digits = "0123456789" ;
    long long count = 0 ;

    const long long target = 1000000 ; 

    do 
        {
            count ++ ;
            if ( count == target ) 
                {
                    std::cout << "\n\t 🖝  The millionth lexicographic permutation is : " 
                    << digits 
                    << "\n\n\n" ;
                    break ;
                }

        } while ( std::next_permutation ( digits.begin() , digits.end() ) ) ;

    return 0 ;
}
