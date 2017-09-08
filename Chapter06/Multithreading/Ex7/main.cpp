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
using namespace std;

#include "Thread.h"

int main ( ) {
	Thread reader( READER );
	Thread writer( WRITER );

	reader.start( );
	writer.start( );

	reader.join( );
	writer.join( );

	return 0;
}
