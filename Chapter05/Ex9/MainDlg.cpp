/*
 * =====================================================================================
 *
 *       Filename:  MainDlg.cpp
 *
 *    Description:  This class is going to be the main dialog of this application.
 *  		    Stacked layout will be used to stack up all the four pages in this dialog.
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

#include "MainDlg.h" 

MainDlg::MainDlg() {
	pHBoxDlg = new HBoxDlg(this);
	pVBoxDlg = new VBoxDlg(this);
	pBoxDlg  = new  BoxDlg(this);
	pGridDlg = new GridDlg(this);

	pStackedLayout = new QStackedLayout();

	pStackedLayout->addWidget ( pHBoxDlg );
	pStackedLayout->addWidget ( pVBoxDlg );
	pStackedLayout->addWidget ( pBoxDlg  );
	pStackedLayout->addWidget ( pGridDlg );

	pNavigationLayout = new QBoxLayout(QBoxLayout::RightToLeft);

	pPrevBttn = new QPushButton ("Prev Page");
	pNextBttn = new QPushButton ("Next Page");
	pExitBttn = new QPushButton ("Exit App");

	pNavigationLayout->addWidget ( pExitBttn );
	pNavigationLayout->addWidget ( pNextBttn );
	pNavigationLayout->addWidget ( pPrevBttn );
	pNavigationLayout->addStretch( );

	pMainLayout = new QVBoxLayout(this);

	pMainLayout->addLayout ( pStackedLayout );
	pMainLayout->addLayout ( pNavigationLayout );

	setLayout ( pMainLayout );

	connect (
		pPrevBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onPrevPage() )
	);

	connect (
		pNextBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onNextPage() )
	);

	connect (
		pExitBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onExitApp() )
	);
}

void MainDlg::onPrevPage() {
	int currentPageIndex = pStackedLayout->currentIndex();

	if ( currentPageIndex > 0 )
		pStackedLayout->setCurrentIndex ( currentPageIndex - 1 );
}

void MainDlg::onNextPage() {
	int currentPageIndex = pStackedLayout->currentIndex();

	if ( currentPageIndex < 3 )
		pStackedLayout->setCurrentIndex ( currentPageIndex + 1 );
}

void MainDlg::onExitApp() {
	close();
}
