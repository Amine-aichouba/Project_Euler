

#include <iostream>


int main ()
{
    int a , b , c ;
    bool found = false ;
    for ( a = 1 ; a < 1000 ; a ++ )
        {
            for ( b = a + 1 ; b < 1000 ; b ++ )
                {
                    c = 1000 - a - b ;
                    if ( (a*a) + (b*b) == (c*c) )
                        {
                            found = true ;
                            break ;
                        }
                }

            if ( found ) break ;
        }
    
    if ( found )
        {
            std::cout << "\n\t 🖝  The Pythagorean triplet is : "
                      << "➤ a : " << a 
                      << "\n\t\t\t\t\t ➤ b : " << b 
                      << "\n\t\t\t\t\t ➤ c : " << c 
                      << "\n\n\t 🖝  The product abc is : " 
                      << a*b*c
                      << std::endl ;
        }
        else
            std::cout << "\n\t 🖝 No Pythagorean triplet found ⚠️⚠️⚠️ \n" ;
    return 0 ;
}