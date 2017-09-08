#include <iostream>
#include <bitset>
#include <algorithm>
#include <iterator>
using namespace std;

template <>
class DynamicArray<bool> {
      private:
            deque< bitset<8> *>  dynamicArray;
	    bitset<8> oneByte;
	    typename deque<bitset<8> * >::iterator pos;
	    int bitSetIndex;

	    int getDequeIndex ( ) {
		 return (bitSetIndex) ? (bitSetIndex/8) : 0;
	    }
      public:
            DynamicArray( ) { 
		    bitSetIndex = 0;
		    initialize(); 
	    }
            ~DynamicArray( ) { }

	    void initialize( ) {
		 pos = dynamicArray.begin();
		 bitSetIndex = 0;
	    }


	    void appendValue( bool value) {

		 int dequeIndex = getDequeIndex( );

		 bitset<8> *pBit = NULL;

		 if ( ( dynamicArray.size() == 0 ) || ( dequeIndex >= ( dynamicArray.size()) ) ) {
	            pBit = new bitset<8>();
		    pBit->reset();
		    dynamicArray.push_back ( pBit );
		 }

		 if ( !dynamicArray.empty() )
		    pBit = dynamicArray.at( dequeIndex );

		 pBit->set( bitSetIndex % 8, value ); 
		 ++bitSetIndex; 

            }	

	    bool hasNextValue( ) {
		 return (bitSetIndex < ((  dynamicArray.size() * 8 ) ));
	    }

	    bool getValue( ) {

		int dequeIndex = getDequeIndex();
	    	bitset<8> *pBit  = dynamicArray.at(dequeIndex);

		int index = bitSetIndex % 8;
		++bitSetIndex;

		return (*pBit)[index] ? true : false; 

	    }
};
