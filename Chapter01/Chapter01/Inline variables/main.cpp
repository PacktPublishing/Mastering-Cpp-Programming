#include <iostream>
using namespace std;

class MyClass {
    private:
        static inline int count = 0;
    public:
        MyClass() { 
              ++count;
        }

    public:
         void printCount( ) {
              cout << "\nCount value is " << count << endl;
         } 
};

int main ( ) {

    MyClass obj;

    obj.printCount( ) ;

    return 0;
}
