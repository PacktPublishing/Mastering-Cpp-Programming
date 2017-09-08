/*
 * =====================================================================================
 *
 *       Filename:  MyDlg.cpp
 *
 *    Description:  Simple Qt application with QDialog & QPushButton that demonstrates 
 *                  Signals and Slots
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
#include "MyDlg.h"

MyDlg::MyDlg() {
	pLayout = new QHBoxLayout(this);

	pBttn  = new QPushButton ("Click Me");

	pLayout->addWidget ( pBttn ); 

	setLayout ( pLayout );

	setWindowTitle ("Signals and Slots");

	connect (
		pBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onButtonClicked() )
	);
}

void MyDlg::onButtonClicked() {
	qDebug() << "Button clicked ...";
}
