#include "Item.h"

Item::Item ( string name, double quantity, double unitPrice ) {
    this->name = name;
    this->quantity = quantity;
    this->unitPrice = unitPrice;
}

string Item::getDescription() {
    return name;
}

double Item::getQuantity() {
    return quantity;
}

double Item::getPrice() {
    return quantity * unitPrice;
}

void Item::accept ( Visitor *pVisitor ) {
	pVisitor->visit ( this );
}
