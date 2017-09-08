/*
 * =====================================================================================
 *
 *       Filename:  MyDlg.cpp
 *
 *    Description:  Simple Qt application with QDialog, QPushButton and QHBoxLayout
 *
 *        Version:  1.0
 *        Created:  10/16/2016 05:11:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  TekTutor <www.tektutor.org> 
 *
 * =====================================================================================
 */
#include "MyDlg.h" 

MyDlg::MyDlg() {
	pLayout = new QHBoxLayout(this);

	pBttn1  = new QPushButton ("Button 1");
	pBttn2  = new QPushButton ("Button 2");
	pBttn3  = new QPushButton ("Button 3");

	pBttn1->setSizePolicy ( QSizePolicy::Expanding, QSizePolicy::Expanding );
	pBttn2->setSizePolicy ( QSizePolicy::Expanding, QSizePolicy::Expanding );
	pBttn3->setSizePolicy ( QSizePolicy::Expanding, QSizePolicy::Expanding );

	pLayout->addWidget ( pBttn1 );
	pLayout->addWidget ( pBttn2 );
	pLayout->addWidget ( pBttn3 );

	setLayout ( pLayout );

	setWindowTitle ("Horizontal Box Layout");
}

