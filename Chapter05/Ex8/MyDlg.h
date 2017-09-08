/*
 * =====================================================================================
 *
 *       Filename:  MyDlg.h
 *
 *    Description:  Simple Qt application with QPushButton that demonstrates 
 *    		    Signals and Slots 
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

#include <QDialog>
#include <QDebug>
#include <QHBoxLayout>
#include <QPushButton>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QPushButton *pBttn;
	QHBoxLayout *pLayout;

public:
	MyDlg();

private slots:
	void onButtonClicked();

};

