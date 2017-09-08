#include "Visitor.h"
#include "Visitable.h"

class GSTVisitor : public Visitor {
public:
	void visit ( Visitable * );
	double getPrice();
};
