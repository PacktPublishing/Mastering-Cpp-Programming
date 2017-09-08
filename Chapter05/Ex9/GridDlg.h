/*
 * =====================================================================================
 *
 *       Filename:  GridDlg.h
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
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>

class GridDlg : public QWidget {
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3, *pBttn4, *pBttn5;
	QPushButton *pBttn6, *pBttn7, *pBttn8, *pBttn9, *pBttn10;
	QGridLayout *pLayout;
public:
	GridDlg();
};
