#include <iostream>
#include <future>
using namespace std;

void sayHello( ) {
	cout << endl << "Hello Concurrency support library!" << endl;
}

int main ( ) {
	future<void> futureObj = async ( launch::async, sayHello );
	futureObj.wait( );

	return 0;
}
