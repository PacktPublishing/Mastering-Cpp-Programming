/*
 * =====================================================================================
 *
 *       Filename:  MainDlg.h
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

//Built-in Qt headers goes here
#include <QWidget>
#include <QDialog>
#include <QPushButton>
#include <QStackedLayout>
#include <QBoxLayout>
#include <QVBoxLayout>

//Custom headers goes here
#include "HBoxDlg.h"
#include "VBoxDlg.h"
#include "BoxDlg.h"
#include "GridDlg.h"

class MainDlg : public QDialog {
Q_OBJECT
private:
	QStackedLayout *pStackedLayout;
	QBoxLayout *pNavigationLayout;
	QVBoxLayout *pMainLayout;
	QPushButton *pPrevBttn, *pNextBttn, *pExitBttn;

	HBoxDlg *pHBoxDlg;
	VBoxDlg *pVBoxDlg;
	BoxDlg  *pBoxDlg;
	GridDlg *pGridDlg;
public:
	MainDlg();
private slots:
	void onPrevPage();
	void onNextPage();
	void onExitApp();
};
