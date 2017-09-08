/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  This has the main entry-point function. The main function will
 *    		    launch the main dialog that has the stacked layout.
 *
 *        Version:  1.0
 *        Created:  10/19/2016
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  TekTutor <www.tektutor.org> 
 *
 * =====================================================================================
 */
#include <QApplication>
#include "MainDlg.h"

int main ( int argc, char **argv ) {
	QApplication theApp ( argc, argv );

	MainDlg dlg;
	dlg.show();

	return theApp.exec();
}

