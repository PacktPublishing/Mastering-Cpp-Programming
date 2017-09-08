#include "Thread.h"

mutex Thread::locker;
condition_variable Thread::untilReady;
bool Thread::ready = false;
queue<int> Thread::appQueue;

Thread::Thread( ThreadType typeOfThread ) {
	pThread = NULL;
	stopped = false;
	threadType = typeOfThread;
	(CONSUMER == typeOfThread) ? name = "CONSUMER" : name = "PRODUCER";
}

Thread::~Thread( ) {
	delete pThread;
	pThread = NULL;
}

void Thread::run() {
	int count = 0;
	int data = 0;
	while ( 1 ) {
		switch ( threadType ) {
		case CONSUMER: 
		{

			cout << name << " waiting to acquire mutex ..." << endl;

			unique_lock<mutex> uniqueLocker( locker );

			cout << name << " acquired mutex ..." << endl;
			cout << name << " waiting for conditional variable signal..." << endl;

			untilReady.wait ( uniqueLocker, [] { return ready; } );

			cout << name << " received conditional variable signal ..." << endl;

			data = appQueue.front( ) ;

			cout << name << " received data " << data << endl;

			appQueue.pop( );
			ready = false;
		}
			cout << name << " released mutex ..." << endl;
		break;

		case PRODUCER:
		{
			cout << name << " waiting to acquire mutex ..." << endl;
			unique_lock<mutex> uniqueLocker( locker );
			cout << name << " acquired mutex ..." << endl;
			if ( 32000 == count ) count = 0;
			appQueue.push ( ++ count );
			ready = true;
			uniqueLocker.unlock();
			cout << name << " released mutex ..." << endl;
			untilReady.notify_one();
			cout << name << " notified conditional signal ..." << endl;
		}
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
	pThread->join( );
}

void Thread::detach( ) {
	pThread->detach( );
}
