#include <thread>
#include <iostream>
using namespace std;

void threadProc() {
	for( int count=0; count<3; ++count ) {
		cout << "Message => "
		     << count
		     << " from "
		     << this_thread::get_id()
		     << endl;
	}
}

int main() {
	thread thread1 ( threadProc );
	thread thread2 ( threadProc );
	thread thread3 ( threadProc );

	thread1.join();
	thread2.join();
	thread3.join();

	return 0;
}
