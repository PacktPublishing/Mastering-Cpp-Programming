#include <iostream>
#include <functional>
using namespace std;

void globalFunction( ) {
     cout << "globalFunction ..." << endl;
}

class MyClass {
    public:
        void memberFunction ( int data ) {
             std::cout << "\nMyClass memberFunction ..." << std::endl;
        }

        static void staticFunction ( int data ) {
             std::cout << "MyClass staticFunction ..." << std::endl;
        }
};

int main ( ) {

    MyClass obj;

    std::invoke ( &MyClass::memberFunction, obj, 100 );
    std::invoke ( &MyClass::staticFunction, 200 );
    std::invoke ( globalFunction );

    return 0;
}
