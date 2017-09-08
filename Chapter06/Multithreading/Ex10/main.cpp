#include <iostream>
#include <future>
using namespace std;

void sayHello( promise<string> promise_ ) {
	promise_.set_value ( "Hello Concurrency support library!" );
}

int main ( ) {
	promise<string> promiseObj;

	future<string> futureObj = promiseObj.get_future( );
	async ( launch::async, sayHello, move( promiseObj ) );
	cout << futureObj.get( ) << endl;

	return 0;
}
