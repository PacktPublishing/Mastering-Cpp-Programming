#include "Thread.h"

mutex Thread::commonLock;

int Thread::count = 0;

Thread::Thread( ThreadType typeOfThread ) {
	pThread = NULL;
	stopped = false;
	threadType = typeOfThread;
	(threadType == READER) ? name = "READER" : name = "WRITER";
}

Thread::~Thread() {
	delete pThread;
	pThread = NULL;
}

int Thread::getCount( ) {
	cout << name << " is waiting for lock in getCount() method ..." <<
endl;
	lock_guard<mutex> locker(commonLock);
	return count;
}

int Thread::updateCount( ) {
	cout << name << " is waiting for lock in updateCount() method ..." << endl;
	lock_guard<mutex> locker(commonLock);
	int value = getCount();
	count = ++value;
	return count;
}

void Thread::run( ) {
	while ( 1 ) {
		switch ( threadType ) {
			case READER:
				cout << name<< " => value of count from getCount() method is " << getCount() << endl;
				this_thread::sleep_for ( 500ms );
			break;

			case WRITER:
				cout << name << " => value of count from updateCount() method is" << updateCount() << endl;
				this_thread::sleep_for ( 500ms );
			break;
		}
	}
}

void Thread::start( ) {
	pThread = new thread ( &Thread::run, this );
}

void Thread::stop( ) {
	stopped = true;
}

void Thread::join( ) {
	pThread->join();
}

void Thread::detach( ) {
	pThread->detach( );
}
