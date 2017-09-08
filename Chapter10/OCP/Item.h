#ifndef __ITEM_H
#define __ITEM_H

#include <iostream>
#include <string>
using namespace std;

#include "Visitable.h"
#include "Visitor.h"

class Item : public Visitable {
private: 
    string name;
    double quantity;
    double unitPrice;
public:
    Item ( string name, double quantity, double unitPrice ); 
    string getDescription();
    double getQuantity();
    double getPrice();
    void accept ( Visitor *pVisitor );
};

#endif
