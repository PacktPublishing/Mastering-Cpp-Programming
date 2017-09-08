/*
 * =====================================================================================
 *
 *       Filename:  MyDlg.h
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

 #include <QPushButton>
 #include <QLineEdit>
 #include <QLabel>
 #include <QDialog>
 #include <QVBoxLayout>
 #include <QFormLayout>
 #include <QString>
 #include <QDebug>

 class MyDlg : public QDialog {
 Q_OBJECT
 private:
	 QVBoxLayout *pMainLayout;
	 QBoxLayout *pButtonLayout;
	 QFormLayout *pFormLayout;

	 QLineEdit *pFirstEdit, *pSecondEdit, *pResultEdit;
	 QLabel *pFirstLabel, *pSecondLabel, *pResultLabel;
	 QPushButton *pAddButton, *pSubtractButton, *pMultiplyButton, *pDivideButton;
 public:
	 MyDlg();
 private slots:
	 void onAddButtonClicked();
	 void onSubtractButtonClicked();
	 void onMultiplyButtonClicked();
	 void onDivideButtonClicked();
 };
