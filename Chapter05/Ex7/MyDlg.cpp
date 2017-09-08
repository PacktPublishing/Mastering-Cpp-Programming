/*
 * =====================================================================================
 *
 *       Filename:  MyDlg.cpp
 *
 *    Description:  Simple Qt application with QDialog, QPushButton and QGridLayout
 *
 *        Version:  1.0
 *        Created:  10/17/2016
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
	pLayout = new QGridLayout(this);

	pBttn1  = new QPushButton ("Button 1");
	pBttn2  = new QPushButton ("Button 2");
	pBttn3  = new QPushButton ("Button 3");
	pBttn4  = new QPushButton ("Button 4");

	pBttn5  = new QPushButton ("Button 5");
	pBttn6  = new QPushButton ("Button 6");
	pBttn7  = new QPushButton ("Button 7");
	pBttn8  = new QPushButton ("Button 8");

	pBttn3->setSizePolicy ( QSizePolicy::Expanding, QSizePolicy::Expanding );

	pLayout->addWidget ( pBttn1, 0, 0, 1, 1 ); //First row, first column - Takes one row and one column
	pLayout->addWidget ( pBttn2, 0, 1, 1, 2 ); //First row, second column - Takes one row and two columns
	pLayout->addWidget ( pBttn3, 0, 3, 2, 1 ); //First row, third column - Takes two rows and one column

	pLayout->addWidget ( pBttn4, 1, 0, 1, 3 ); //Second row, fourth column - Takes one row and three columns

	pLayout->addWidget ( pBttn5, 2, 0 ); //Third row, first column - Takes one row and one column
	pLayout->addWidget ( pBttn6, 2, 1 ); //Third row, second column - Takes one row and two columns
	pLayout->addWidget ( pBttn7, 2, 2 ); //Third row, third column - Takes two rows and one column
	pLayout->addWidget ( pBttn8, 2, 3 ); //Third row, fourth column - Takes one row and three columns

	setLayout ( pLayout );

	setWindowTitle ("Grid Layout");
}
