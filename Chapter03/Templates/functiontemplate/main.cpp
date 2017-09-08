#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

template <typename T, int size>
void sort ( T input[] ) {

     for ( int i=0; i<size; ++i) {
	     for (int j=0; j<size; ++j) {
		     if ( input[i] < input[j] )
			     swap (input[i], input[j] );
	     }
     }

}

int main ( ) {

	int a[10] = { 100, 10, 40, 20, 60, 80, 5, 50, 30, 25 };

	cout << "\nValues in the int array before sorting ..." << endl;
	copy ( a, a+10, ostream_iterator<int>( cout, "\t" ) );
	cout << endl;

	::sort<int, 10>( a ); 

	cout << "\nValues in the int array after sorting ..." << endl;
	copy ( a, a+10, ostream_iterator<int>( cout, "\t" ) );
	cout << endl;

	double b[5] = { 85.6d, 76.13d, 0.012d, 1.57d, 2.56d }; 

	cout << "\nValues in the double array before sorting ..." << endl;
	copy ( b, b+5, ostream_iterator<double>( cout, "\t" ) );
	cout << endl;

	::sort<double, 5>( b ); 

	cout << "\nValues in the double array after sorting ..." << endl;
	copy ( b, b+5, ostream_iterator<double>( cout, "\t" ) );
	cout << endl;

	string names[6] = { 
				"Rishi Kumar Sahay", 
				"Arun KR", 
				"Arun CR", 
				"Ninad", 
				"Pankaj", 
				"Nikita" 
	};

	cout << "\nNames before sorting ..." << endl;
	copy ( names, names+6, ostream_iterator<string>( cout, "\n" ) );
	cout << endl;

	::sort<string, 6>( names );

	cout << "\nNames after sorting ..." << endl;
	copy ( names, names+6, ostream_iterator<string>( cout, "\n" ) );
	cout << endl;

	return 0;
}
