/*
 * =====================================================================================
 *
 *       Filename:  MyDlg.cpp
 *
 *    Description:  Simple Qt application with QDialog, QPushButton and QxLayout
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
	pLayout = new QGridLayout(this);

	pBttn1  = new QPushButton ("Button 1");
	pBttn2  = new QPushButton ("Button 2");
	pBttn3  = new QPushButton ("Button 3");
	pBttn4  = new QPushButton ("Button 4");
	pBttn5  = new QPushButton ("Button 5");

	pBttn6  = new QPushButton ("Button 6");
	pBttn7  = new QPushButton ("Button 7");
	pBttn8  = new QPushButton ("Button 8");
	pBttn9  = new QPushButton ("Button 9");
	pBttn10  = new QPushButton ("Button 10");

	pLayout->addWidget ( pBttn1, 0, 0 ); //First row, first column
	pLayout->addWidget ( pBttn2, 0, 1 ); //First row, second column
	pLayout->addWidget ( pBttn3, 0, 2 ); //First row, third column
	pLayout->addWidget ( pBttn4, 0, 3 ); //First row, fourth column
	pLayout->addWidget ( pBttn5, 0, 4 ); //First row, fifth column

	pLayout->addWidget ( pBttn6,  1, 0 ); //Second row, first column
	pLayout->addWidget ( pBttn7,  1, 1 ); //Second row, second column
	pLayout->addWidget ( pBttn8,  1, 2 ); //Second row, third column
	pLayout->addWidget ( pBttn9,  1, 3 ); //Second row, fourth column
	pLayout->addWidget ( pBttn10, 1, 4 ); //Second row, fifth column

	setLayout ( pLayout );

	setWindowTitle ("Grid Layout");
}
