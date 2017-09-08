/*
 * =====================================================================================
 *
 *       Filename:  MyDlg.cpp
 *
 *    Description:  This dialog will demonstrate the use of QFormLayout and the way
 *                  to combine multiple layouts in the same dialog.
 *                  It will also given an idea on how to make use of QLabel, QLineEdit
 *                  and QPushButton and Signals and Slots.
 *
 *        Version:  1.0
 *        Created:  10/22/2016
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
	pAddButton = new QPushButton("Add");
	pSubtractButton = new QPushButton("Subtract");
	pMultiplyButton = new QPushButton("Multiply");
	pDivideButton = new QPushButton("Divide");

	pButtonLayout = new QBoxLayout(QBoxLayout::RightToLeft);

	pButtonLayout->addWidget ( pDivideButton );
	pButtonLayout->addWidget ( pMultiplyButton );
	pButtonLayout->addWidget ( pSubtractButton );
	pButtonLayout->addWidget ( pAddButton );
	pButtonLayout->addStretch ( );

	pFormLayout = new QFormLayout();

	pFirstEdit  = new QLineEdit();
	pSecondEdit = new QLineEdit();
	pResultEdit = new QLineEdit();

	pFormLayout->addRow("First number",pFirstEdit);
	pFormLayout->addRow("Second number",pSecondEdit);
	pFormLayout->addRow("Result",pResultEdit);

	pMainLayout = new QVBoxLayout(this);

	pMainLayout->addLayout ( pFormLayout );
	pMainLayout->addLayout ( pButtonLayout );

	setLayout ( pMainLayout );

	connect (
		pAddButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onAddButtonClicked() )
	);
	connect (
		pSubtractButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onSubtractButtonClicked() )
	);
	connect (
		pMultiplyButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onMultiplyButtonClicked() )
	);
	connect (
		pDivideButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onDivideButtonClicked() )
	);
}

void MyDlg::onAddButtonClicked() {
	qDebug() << "Add button clicked ..." << endl;
	int firstNumber  = pFirstEdit->text().toInt();
	int secondNumber = pSecondEdit->text().toInt();
	int result       = firstNumber + secondNumber;
	QString strResult;
	strResult.setNum( result );

	pResultEdit->setText( strResult );
}

void MyDlg::onSubtractButtonClicked() {
	qDebug() << "Subtract button clicked ..." << endl;
}

void MyDlg::onMultiplyButtonClicked() {
	qDebug() << "Multiply button clicked ..." << endl;
}

void MyDlg::onDivideButtonClicked() {
	qDebug() << "Divide button clicked ..." << endl;
}
