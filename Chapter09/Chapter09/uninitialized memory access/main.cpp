#include <iostream>
using namespace std;

class MyClass {
    private:
       int x;
    public:
    	MyClass( );
	void print( );
}; 

MyClass::MyClass() {
    cout << "\nMyClass constructor ..." << endl;
}

void MyClass::print( ) {
     cout << "\nValue of x is " << x << endl;
}

int main ( ) {

    MyClass obj;
    obj.print();
    return 0;

}
