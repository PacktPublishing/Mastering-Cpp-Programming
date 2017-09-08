#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main () {

	list<int> l;

	for (int count=0; count<5; ++count)
		l.push_back( (count+1) * 100 );

	auto pos = l.begin();

	cout << "\nPrint the list ..." << endl;
	while ( pos != l.end() )
		cout << *pos++ << "-->";
	cout << " X" << endl;

	return 0;
}
