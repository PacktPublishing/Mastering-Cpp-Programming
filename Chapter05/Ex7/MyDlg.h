/*
 * =====================================================================================
 *
 *       Filename:  MyDlg.h
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

#include <QDialog>
#include <QGridLayout>
#include <QPushButton>

class MyDlg : public QDialog {
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3, *pBttn4;
	QPushButton *pBttn5, *pBttn6, *pBttn7, *pBttn8;
	QGridLayout *pLayout;
public:
	MyDlg();
};

