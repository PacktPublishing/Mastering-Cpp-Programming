#ifndef __VISITABLE_H
#define __VISITABLE_H

#include <string>
using namespace std;

class Visitor;

class Visitable {
public:
   virtual void accept ( Visitor * ) = 0;
   virtual double getPrice() = 0;
   virtual string getDescription() = 0;
};

#endif
