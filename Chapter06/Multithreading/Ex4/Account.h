/*
 * =====================================================================================
 *
 *       Filename:  Account.h
 *
 *    Description:  Demonstrates use of mutex.
 *
 *        Version:  1.0
 *        Created:  04/09/2017 10:28:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  <http://www.tektutor.org>
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

class Account {
private:
	double balance;
public:
	Account( double );
	double getBalance( );
	void deposit ( double amount );
	void withdraw ( double amount ) ;
};
