#include "Item.h"
#include "GSTVisitor.h"

int main ( ) {

	Item pen("Reynolds Microtib Pen", 2, 10.0);   
	Item schoolBag("School Bag", 1, 100.0);
	Item shoes("Formal Shoe", 2, 500.0);

	GSTVisitor gstVisitor;

	cout << "-----------------------------------------" << endl;
	cout << "               Bill                      " << endl;
	cout << "-----------------------------------------" << endl;

	pen.accept ( &gstVisitor );
	double totalPurchaseAmount = gstVisitor.getPrice();
	cout << pen.getDescription() << "\t\t is Rs." << gstVisitor.getPrice() << endl;

	schoolBag.accept ( &gstVisitor );
	totalPurchaseAmount = totalPurchaseAmount + gstVisitor.getPrice();
	cout << schoolBag.getDescription() << "\t\t\t is Rs." << gstVisitor.getPrice() << endl;

	shoes.accept ( &gstVisitor );
	totalPurchaseAmount = totalPurchaseAmount + gstVisitor.getPrice();
	cout << shoes.getDescription() << "\t\t\t is Rs." << gstVisitor.getPrice() << endl;

	cout << "-----------------------------------------" << endl;

	return 0;
}
