#include <iostream>
#include <string>
#include <memory>
#include <sstream>
using namespace std;

class MyClass {
	private:
		static int count;
		string name;
	public:
		MyClass() {
			ostringstream stringStream(ostringstream::ate);
			stringStream << "Object";
			stringStream << ++count;

			name = stringStream.str();

			cout << "\nMyClass Default constructor - " << name  << endl;
		}

		~MyClass() {
			cout << "\nMyClass destructor - " << name << endl;
		}

		MyClass ( const MyClass &objectBeingCopied ) {
			cout << "\nMyClass copy constructor" << endl;
		}

		MyClass& operator = ( const MyClass &objectBeingAssigned ) {
			cout << "\nMyClass assignment operator" << endl;
		}

		void sayHello() {
			cout << "Hello from MyClass " << name << endl;
		}

};

int MyClass::count = 0;

int main ( ) {

	auto_ptr<MyClass> ptr1( new MyClass() );
	auto_ptr<MyClass> ptr2( new MyClass() );

	ptr1->sayHello();
	ptr2->sayHello();

	//At this point the below stuffs happen
	//1.  ptr2 smart pointer has given up ownership of MyClass Object 2
	//2.  MyClass Object 2 will be destructed as ptr2 has given up its ownership on Object 2
	//3.  Ownership of Object 1 will be transferred to ptr2
	ptr2 = ptr1;

	//The line below if uncommented will result in core dump as ptr1 has given up its ownership
	//on Object 1 and the ownership of Object 1 is transferred to ptr2.
//	ptr1->sayHello();

	ptr2->sayHello();

	return 0;
}
