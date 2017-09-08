/*
 * =====================================================================================
 *
 *       Filename:  Account.cpp
 *
 *    Description:  Demonstrates use of mutex to synchronize multiple threads
 *                  that share a common resource within same process.
 *
 *        Version:  1.0
 *        Created:  04/09/2017 10:31:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  <http://www.tektutor.org>
 *
 * =====================================================================================
 */
#include "Account.h"

Account::Account(double balance) {
	this->balance = balance;
}

double Account::getBalance() {
	return balance;
}

void Account::withdraw(double amount) {
	if ( balance < amount ) {
		cout << "Insufficient balance, withdraw denied." << endl;
		return;
	}

	balance = balance - amount;
}

void Account::deposit(double amount) {
	balance = balance + amount;
}
