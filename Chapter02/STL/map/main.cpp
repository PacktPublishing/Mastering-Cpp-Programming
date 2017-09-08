#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

int main () {
	map< string, long > contacts;

	contacts[ "Jegan" ] = 1234567890;
	contacts[ "Meena" ] = 5784433221;
	contacts[ "Nitesh" ] = 4567891234;
	contacts[ "Sriram" ] = 8901122334;

	auto pos = contacts.find( "Sriram" );

	if ( pos != contacts.end() )
	cout << "\nMobile number of " << pos->first << " is " <<
		pos->second << endl;
	else
		cout << "\nContact not found." << endl;

	return 0;
}
