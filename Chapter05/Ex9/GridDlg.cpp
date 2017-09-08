/*
 * =====================================================================================
 *
 *       Filename:  GridDlg.cpp
 *
 *    Description:  This dialog will demonstrate Grid layout with 10 buttons.  
 *
 *
 *        Version:  1.0
 *        Created:  10/20/2016 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org> 
 *   Organization:  TekTutor <www.tektutor.org>
 *
 * =====================================================================================
 */
#include "GridDlg.h" 

GridDlg::GridDlg() {

	pBttn1  = new QPushButton("Button 1");
	pBttn2  = new QPushButton("Button 2");
	pBttn3  = new QPushButton("Button 3");
	pBttn4  = new QPushButton("Button 4");
	pBttn5  = new QPushButton("Button 5");

	pBttn6  = new QPushButton("Button 6");
	pBttn7  = new QPushButton("Button 7");
	pBttn8  = new QPushButton("Button 8");
	pBttn9  = new QPushButton("Button 9");
	pBttn10 = new QPushButton("Button 10");

	pLayout = new QGridLayout(this);

	pLayout->addWidget ( pBttn1, 0, 0 ); //First row, First Column
	pLayout->addWidget ( pBttn2, 0, 1 ); //First row, Second Column
	pLayout->addWidget ( pBttn3, 0, 2 ); //First row, Third Column
	pLayout->addWidget ( pBttn4, 0, 3 ); //First row, Fourth Column
	pLayout->addWidget ( pBttn5, 0, 4 ); //First row, Fifth Column

	pLayout->addWidget ( pBttn6, 1, 0 ); //Second row, First Column
	pLayout->addWidget ( pBttn7, 1, 1 ); //Second row, Second Column
	pLayout->addWidget ( pBttn8, 1, 2 ); //Second row, Third Column
	pLayout->addWidget ( pBttn9, 1, 3 ); //Second row, Fourth Column
	pLayout->addWidget ( pBttn10,1, 4 ); //Second row, Fifth Column

	setLayout ( pLayout );
}
