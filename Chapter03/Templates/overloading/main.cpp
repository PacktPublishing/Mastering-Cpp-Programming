#include <iostream>
#include <array>
using namespace std;

void sort ( array<int,6> data ) {

     cout << "Non-template sort function invoked ..." << endl;
     
     int size = data.size();

     for ( int i=0; i<size; ++i ) {
         for ( int j=0; j<size; ++j ) {
              if ( data[i] < data[j] )
                  swap ( data[i], data[j] );
          }
     }

}


template <typename T, int size>
void sort ( array<T, size> data  ) {

     cout << "Template sort function invoked with one argument..." << endl;

     cout << "\nSize is " << size << endl;

     for ( int i=0; i<size; ++i ) {
           for ( int j=0; j<size; ++j ) {
                if ( data[i] < data[j] )
	                swap ( data[i], data[j] );
	   }
     }

}

template <typename T>
void sort ( T data[], int size ) {

         cout << "Template sort function invoked with two argument..." << endl;

         for ( int i=0; i<size; ++i ) {
              for ( int j=0; j<size; ++j ) {
                  if ( data[i] < data[j] )
                      swap ( data[i], data[j] );
              }
         }

}


int main( ) {

        array<int, 6> a = { 10, 50, 40, 30, 60, 20 };
        ::sort ( a );

        array<float,6> b = { 10.6f, 57.9f, 80.7f, 35.1f, 69.3f, 20.0f };
        ::sort<float,6>( b );

        array<double,6> c = { 10.6d, 57.9d, 80.7d, 35.1d, 69.3d, 20.0d };
        ::sort<double,6> ( c );

        double d[] = { 10.5d, 12.1d, 5.56d, 1.31d, 81.5d, 12.86d };
	::sort<double> ( d, 6 ); 

        return 0;
}
