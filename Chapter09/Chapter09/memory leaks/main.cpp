#include "list.h"

int main ( ) {
	List l;

	for (int count = 0; count < 5; ++count )
		l.append ( (count+1) * 10 );
	l.print();

	return 0;
}
