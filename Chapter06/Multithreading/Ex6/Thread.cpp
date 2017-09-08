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

mutex Thread::locker;

Thread::Thread(Account *pAccount, ThreadType typeOfThread) {
	this->pAccount = pAccount;
	pThread = NULL;
	stopped = false;
	threadType = typeOfThread;
}

Thread::~Thread() {
	delete pThread;
	pThread = NULL;
}

void Thread::run() {
    while(1) {
	switch ( threadType ) {
		case DEPOSITOR:
			locker.lock();

			cout << "Depositor: current balance is " << pAccount->getBalance() << endl;
			pAccount->deposit(2000.00);
			cout << "Depositor: post deposit balance is " << pAccount->getBalance() << endl;

			locker.unlock();

			this_thread::sleep_for(1s);
			break;

		case WITHDRAWER:
			locker.lock();

			cout << "Withdrawer: current balance is " << pAccount->getBalance() << endl;
			pAccount->withdraw(1000.00);
			cout << "Withdrawer: post withraw balance is " << pAccount->getBalance() << endl;

			locker.unlock();

			this_thread::sleep_for(1s);
			break;
	}
    }
}

void Thread::start() {
	pThread = new thread( &Thread::run, this );
}

void Thread::stop() {
	stopped = true;
}

void Thread::join() {
	pThread->join();
}

void Thread::detach() {
	pThread->detach();
}
