/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  This exercise will demonstrate using mutex as a locking mechnaism.
 *
 *        Version:  1.0
 *        Created:  04/09/2017 10:24:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  <http://www.tektutor.org>
 *
 * =====================================================================================
 */

#include <iostream>
#include <thread>
#include <mutex>
#include "Account.h"
using namespace std;

enum ThreadType {
	DEPOSITOR,
	WITHDRAWER
};

mutex locker;

Account account(5000.00);

void threadProc ( ThreadType typeOfThread ) {

	while ( 1 ) {
	switch ( typeOfThread ) {
		case DEPOSITOR: {

			locker.lock();

			cout << "Account balance before the deposit is "
			     << account.getBalance() << endl;

			account.deposit( 2000.00 );

			cout << "Account balance after deposit is "
			     << account.getBalance() << endl;

			locker.unlock();
			this_thread::sleep_for( 1s );
}
break;

		case WITHDRAWER: {

			locker.lock();

			cout << "Account balance before withdrawing is "
			     << account.getBalance() << endl;

			account.deposit( 1000.00 );
			cout << "Account balance after withdrawing is "
			     << account.getBalance() << endl;

			locker.unlock();
			this_thread::sleep_for( 1s );
		}
		break;
	}
	}
}

int main( ) {
	thread depositor ( threadProc, ThreadType::DEPOSITOR );
	thread withdrawer ( threadProc, ThreadType::WITHDRAWER );

	depositor.join();
	withdrawer.join();

	return 0;
}
