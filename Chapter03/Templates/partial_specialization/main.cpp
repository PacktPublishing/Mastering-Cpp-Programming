#include "partiallyspecialized.h"

int main ( ) {

	int x = 10;
	int *y = &x;
	int *z = &x;

	MyTemplateClass<int, int*, int*> obj;

	obj.F1(x, y, z);
	obj.F2(x, x);

	return 0;
}

