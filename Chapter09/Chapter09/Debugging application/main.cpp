#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std; //Use this judiciously - this is applicable throughout the book

class MyInteger {
      private:
           int number;

      public:
           MyInteger( int value ) {
                this->number = value;
           }

           MyInteger(const MyInteger & rhsObject ) {
                this->number = rhsObject.number;
           }

           MyInteger& operator = (const MyInteger & rhsObject ) {

                if ( this != &rhsObject )
                     this->number = rhsObject.number;

                return *this;
           }

           bool operator < (const MyInteger &rhsObject) {
                return this->number > rhsObject.number;
           }

           bool operator > (const MyInteger &rhsObject) {
                return this->number > rhsObject.number;
           }

           friend ostream & operator << ( ostream &output, const MyInteger &object );
};

ostream & operator << (ostream &o, const MyInteger& object) {
    o << object.number;
}

int main ( ) {

    vector<MyInteger> v = { 10, 100, 40, 20, 80, 70, 50, 30, 60, 90 };

    cout << "\nVectors entries before sorting are ..." << endl;
    copy ( v.begin(), v.end() , ostream_iterator<MyInteger>( cout, "\t" ) );
    cout << endl;

    sort ( v.begin(), v.end() );

    cout << "\nVectors entries after sorting are ..." << endl;
    copy ( v.begin(), v.end() , ostream_iterator<MyInteger>( cout, "\t" ) );
    cout << endl;

    return 0;
}