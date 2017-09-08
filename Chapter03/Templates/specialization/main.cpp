#include "dynamicarray.h"
#include "dynamicarrayforbool.h"

int main ( ) {

	DynamicArray<int> intArray;

	intArray.appendValue( 100 );
	intArray.appendValue( 200 );
	intArray.appendValue( 300 );
	intArray.appendValue( 400 );

	intArray.initialize();

	cout << "\nInt DynamicArray values are ..." << endl;
	while ( intArray.hasNextValue()  )
		cout << intArray.getValue() << "\t";
	cout << endl;

	DynamicArray<char> charArray;

	charArray.appendValue( 'H' );
	charArray.appendValue( 'e' );
	charArray.appendValue( 'l' );
	charArray.appendValue( 'l' );
	charArray.appendValue( 'o' );

	charArray.initialize();

	cout << "\nChar DynamicArray values are ..." << endl;
	while ( charArray.hasNextValue()  )
		cout << charArray.getValue() << "\t";
	cout << endl;

	DynamicArray<bool> boolArray;

	
	boolArray.appendValue ( true );
	boolArray.appendValue ( false );
	boolArray.appendValue ( true );
	boolArray.appendValue ( false );

	boolArray.appendValue ( true );
	boolArray.appendValue ( false );
	boolArray.appendValue ( true );
	boolArray.appendValue ( false );

	boolArray.appendValue ( true );
	boolArray.appendValue ( true);
	boolArray.appendValue ( false);
	boolArray.appendValue ( false );

	boolArray.appendValue ( true );
	boolArray.appendValue ( true);
	boolArray.appendValue ( false);
	boolArray.appendValue ( false );

	boolArray.initialize();
	cout << "\nBool DynamicArray values are ..." << endl;
	while ( boolArray.hasNextValue()  )
		cout << boolArray.getValue() ;
	cout << endl;

	return 0;

}
