/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Simple Qt application with QDialog & QPushButton that demonstrates
 *                  Signals and Slots
 *
 *        Version:  1.0
 *        Created:  10/18/2016
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  TekTutor <www.tektutor.org> 
 *
 * =====================================================================================
 */
#include <QApplication>
#include "MyDlg.h"

int main ( int argc, char **argv ) {
	QApplication theApp ( argc, argv );

	MyDlg dlg;
	dlg.show();

	return theApp.exec();
}

