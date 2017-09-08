/*
 * =====================================================================================
 *
 *       Filename:  HBoxDlg.h
 *
 *    Description:  This dialog will demonstrate Horizontal box layout with 5 buttons.
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
#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>

class HBoxDlg : public QWidget {
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3, *pBttn4, *pBttn5;
	QHBoxLayout *pLayout;
public:
	HBoxDlg();
};
