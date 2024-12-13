#include <iostream>

int main() 
{
    int sunday = 0 ;
    int day = 1 ;

    for ( int year = 1900 ; year <= 2000 ; year ++ ) 
        {
            for ( int month = 1 ; month <= 12 ; month ++ ) 
                {
                    if ( year > 1900  &&  day % 7 == 0 ) 
                        sunday ++ ;

                    if ( month == 4 || month == 6 || month == 9 || month == 11 )   
                        day += 30 ;               

                    else 
                        if ( month == 2 ) 
                            {
                                if ( ( year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0 ) ) 
                                    day += 29 ;
                                else 
                                    day += 28 ;
                            } 
                            else 
                                day += 31 ;
                                                            
        }
    }

    std::cout << "\n\t 🖝  Number of Sundays that fell on the first of the month during the twentieth century : "
              << sunday
              << "\n\n\n" ;

    return 0;
}
