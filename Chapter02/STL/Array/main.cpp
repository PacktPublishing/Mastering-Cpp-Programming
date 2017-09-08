#include <iostream>
#include <array>
using namespace std;

#include <iostream>
#include <array>
using namespace std;
int main () {
	array<int,5> a = { 1, 5, 2, 4, 3 };

	cout << "\nSize of array is " << a.size() << endl;

	auto pos = a.begin();

	cout << endl;
	while ( pos != a.end() ) 
		cout << *pos++ << "\t";
	cout << endl;

	return 0;
}
