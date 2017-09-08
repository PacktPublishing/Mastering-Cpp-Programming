/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  This is a simple Hello Wold GUI app in Qt.
 *
 *        Version:  1.0
 *        Created:  10/15/2016 11:41:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  TekTutor <www.tektutor.org>
 *
 * =====================================================================================
 */
#include <QApplication>
#include <QWidget>

int main ( int argc, char **argv ) {

	QApplication theApp (argc,argv);

	QWidget myWindow;
	//myWindow.setWindowTitle ( "Hello Qt, my first GUI application");
	myWindow.show();

	return theApp.exec();
}
