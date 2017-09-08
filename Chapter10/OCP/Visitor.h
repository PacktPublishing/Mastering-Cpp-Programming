class Visitable;

#ifndef __VISITOR_H
#define __VISITOR_H


class Visitor {
protected:
	double price;

public:
	virtual void visit ( Visitable * ) = 0;
	virtual double getPrice() = 0;
};

#endif
