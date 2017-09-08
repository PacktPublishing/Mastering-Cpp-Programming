/*
 * =====================================================================================
 *
 *       Filename:  Thread.cpp
 *
 *    Description:  This is a thread class that abstracts the C++ Thread
 *                  Support Library.
 *
 *        Version:  1.0
 *        Created:  04/09/2017 04:12:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  <http://www.tektutor.org>
 *
 * =====================================================================================
 */

#include "Thread.h"

Thread::Thread() {
	pThread = NULL;
	stopped = false;
}

Thread::~Thread() {
	delete pThread;
	pThread = NULL;
}

void Thread::run() {
	while ( ! stopped ) {
		cout << this_thread::get_id() << endl;
		this_thread::sleep_for ( 1s );
	}
	cout << "\nThread " << this_thread::get_id()
	     << " stopped as requested." << endl;
	return;
}

void Thread::stop() {
	stopped = true;
}

void Thread::start() {
	pThread = new thread( &Thread::run, this );
}


void Thread::join() {
	pThread->join();
}

void Thread::detach() {
	pThread->detach();
}
