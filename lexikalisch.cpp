#include <iostream>
using namespace std;
int main ( void ) {
    string array [] = { "es", "wie", "geht", "Dir ?" };
    string hilf = " ";
    int i = 0;
    int y = 0;
    while ( i < 3 ) {
        y= i+1;
        while ( y < 4 ) {
            if ( array [ i ] < array [ y ] ) {
                hilf = array [ i ];
                array [ i ] = array [ y ];
                array [ y ] = hilf;
            }
            y++;
        } // end while innen
        i++;
    } // end while aussen
    for ( string s : array ) cout << s << "\n ";
}