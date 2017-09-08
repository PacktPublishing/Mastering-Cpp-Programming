#include <stdlib.h>

int main ( ) {

        int *ptr = new int();

        free (ptr); // The correct approach is delete ptr

        char *c = (char*)malloc ( sizeof(char) );

        delete c; // The correct approach is free ( c )

        return 0;
}