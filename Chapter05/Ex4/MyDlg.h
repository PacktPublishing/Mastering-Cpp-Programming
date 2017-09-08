/*
 * =====================================================================================
 *
 *       Filename:  MyDlg.h
 *
 *    Description:  Simple Qt application with QDialog, QPushButton and QVBoxLayout
 *
 *        Version:  1.0
 *        Created:  10/16/2016 05:08:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  TekTutor <www.tektutor.org>
 *
 * =====================================================================================
 */

#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>

class MyDlg : public QDialog {
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3;
	QVBoxLayout *pLayout;
public:
	MyDlg();
	void someFunction();
};

