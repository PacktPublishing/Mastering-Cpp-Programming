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

#include "Account.h"
#include "Thread.h"

int main( ) {

	Account account(5000.00);

	Thread depositor ( &account, ThreadType::DEPOSITOR );
	Thread withdrawer ( &account, ThreadType::WITHDRAWER );

	depositor.start();
	withdrawer.start();

	depositor.join();
	withdrawer.join();

	return 0;
}
