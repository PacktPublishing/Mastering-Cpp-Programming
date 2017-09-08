/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Simple Qt application with QDialog, QPushButton and QHBoxLayout
 *
 *        Version:  1.0
 *        Created:  10/16/2016 05:18:27 AM
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
	QApplication::setColorSpec(QApplication::ManyColor);
	QApplication theApp ( argc, argv );

	MyDlg dlg;
	dlg.show();

	return theApp.exec();
}

