#include <iostream>
#include <forward_list>
#include <iterator>
#include <algorithm>
using namespace std;

int main ( ) {

	forward_list<int> l = { 10, 10, 20, 30, 45, 45, 50 };

	cout << "\nlist with all values ..." << endl;
	copy ( l.begin(), l.end(), ostream_iterator<int>(cout, "\t") );

	cout << "\nSize of list with duplicates is " << distance( l.begin(), l.end() ) << endl;

	l.unique();

	cout << "\nSize of list without duplicates is " << distance( l.begin(), l.end() ) << endl;

	l.resize( distance( l.begin(), l.end() ) );

	cout << "\nlist after removing duplicates ..." << endl;
	copy ( l.begin(), l.end(), ostream_iterator<int>(cout, "\t") );
	cout << endl;

	return 0;

}
