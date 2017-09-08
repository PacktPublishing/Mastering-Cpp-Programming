#include <iostream>
#include <future>
#include <thread>
#include <functional>
using namespace std;

int add ( int firstInput, int secondInput ) {
	return firstInput + secondInput;
}

int main ( ) {
	packaged_task<int (int, int)> addTask( add);

	future<int> output = addTask.get_future( );

	thread addThread ( move(addTask), 15, 10 );

	addThread.join( );

	cout << "The sum of 15 + 10 is " << output.get() << endl;

	return 0;
}
