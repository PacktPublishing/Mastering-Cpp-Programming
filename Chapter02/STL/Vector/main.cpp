#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
	vector<int> v = { 1, 5, 2, 4, 3 };

	cout << "\nSize of vector is " << v.size() << endl;

	auto pos = v.begin();

	cout << "\nPrint vector elements before sorting" << endl;
	while ( pos != v.end() )
		cout << *pos++ << "\t";
	cout << endl;

	sort( v.begin(), v.end() );

	pos = v.begin();

	cout << "\nPrint vector elements after sorting" << endl;

	while ( pos != v.end() )
		cout << *pos++ << "\t";
	cout << endl;

	return 0;
}
