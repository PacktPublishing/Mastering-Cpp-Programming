#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
using namespace std;

template <typename T, int size>
class MyAlgorithm {
public:
	MyAlgorithm() { }
	~MyAlgorithm() { }

	void sort( array<T, size> &data ) {

		for ( int i=0; i<size; ++i ) {

			for ( int j=0; j<size; ++j ) {
				if ( data[i] < data[j] ) 
					swap ( data[i], data[j] );
			}

		}

	}	

	void sort ( T data[size] ); 

};

template <typename T, int size>
inline void MyAlgorithm<T, size>::sort ( T data[size] ) {

	for ( int i=0; i<size; ++i ) {

		for ( int j=0; j<size; ++j ) {
			if ( data[i] < data[j] ) 
				swap ( data[i], data[j] );
		}

	}

}
