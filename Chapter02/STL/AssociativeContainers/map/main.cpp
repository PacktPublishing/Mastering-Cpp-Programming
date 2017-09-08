#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

int main ( ) {

	map<string, long> contacts;

	contacts["Jegan"] = 123456789;
	contacts["Meena"] = 523456289;
	contacts["Nitesh"] = 623856729;
	contacts["Sriram"] = 993456789;

	auto pos = contacts.find( "Sriram" );

	if ( pos != contacts.end() )
		cout << pos->second << endl;

	return 0;
}
