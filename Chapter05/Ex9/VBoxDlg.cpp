/*
 * =====================================================================================
 *
 *       Filename:  VBoxDlg.cpp
 *
 *    Description:  This dialog will demonstrate vertical box layout with 5 buttons.  
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
#include "VBoxDlg.h"

VBoxDlg::VBoxDlg() {
	
	pBttn1 = new QPushButton("Button 1");
	pBttn2 = new QPushButton("Button 2");
	pBttn3 = new QPushButton("Button 3");
	pBttn4 = new QPushButton("Button 4");
	pBttn5 = new QPushButton("Button 5");

	pLayout = new QVBoxLayout(this);

	pLayout->addWidget ( pBttn1 );
	pLayout->addWidget ( pBttn2 );
	pLayout->addWidget ( pBttn3 );
	pLayout->addWidget ( pBttn4 );
	pLayout->addWidget ( pBttn5 );

	setLayout ( pLayout );

}
