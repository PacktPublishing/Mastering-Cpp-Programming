#include "GSTVisitor.h"

void GSTVisitor::visit ( Visitable *pItem ) {
	price = pItem->getPrice() + (0.18 * pItem->getPrice());
}

double GSTVisitor::getPrice() {
	return price;
}
