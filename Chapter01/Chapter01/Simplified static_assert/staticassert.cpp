#include <iostream>
#include <type_traits>
using namespace std;

int main ( ) {

        const int x = 5, y = 5;

        static_assert ( 1 == 0, "Assertion failed" );
        static_assert ( 1 == 0 );
        static_assert ( x == y );

        return 0;
}
