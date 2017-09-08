#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
	multiset<int> s = { 10, 30, 10, 50, 70, 90 };

	cout << "\nMultiset values are ..." << endl;

	copy ( s.begin(), s.end(), ostream_iterator<int> ( cout, "\t" ) );
	cout << endl;

	return 0;
}
