#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

template < class T >
class DynamicArray {
      private:
            deque< T > dynamicArray;
	    typename deque< T >::iterator pos;
      public:
            DynamicArray( ) { initialize(); }
            ~DynamicArray( ) { }

	    void initialize( ) {
		 pos = dynamicArray.begin();
	    }

	    void appendValue( T element ) {
	         dynamicArray.push_back ( element );
            }	

	    bool hasNextValue( ) {
		 return ( pos != dynamicArray.end() );
	    }

	    T getValue( ) {
	    	return *pos++;
	    }
};
