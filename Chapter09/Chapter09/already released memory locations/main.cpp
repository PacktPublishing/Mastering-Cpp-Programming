#include <iostream>
using namespace std;

int main( ) {

    int *ptr = new int();

    *ptr = 100;

    cout << "\nValue stored at pointer location is " << *ptr << endl;

    delete ptr;

    *ptr = 200;
    return 0;
}