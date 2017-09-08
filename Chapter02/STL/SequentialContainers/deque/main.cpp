#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

int main ( ) {
    deque<int> d = { 10, 20, 30, 40, 50 };

    cout << "\nSize of deque is " << d.size() << endl;
    cout << "\nCapacity of deque is " << d.max_size() << endl;

    d.push_back( 60 );
    cout << "\nSize of deque is " << d.size() << endl;
    cout << "\nCapacity of deque is " << d.max_size() << endl;

    d.push_front( 5 );
    cout << "\nSize of deque is " << d.size() << endl;
    cout << "\nCapacity of deque is " << d.max_size() << endl;

    cout << "\nPrint the deque ..." << endl;
    copy ( d.begin(), d.end(), ostream_iterator<int>( cout, "\t" ) ); 
    cout << endl;

    d.clear();
    cout << "\nIs the deque emtpty ? " << (d.empty() ? "true" : "false") << endl;
    cout << "\nSize of deque after clearing all values is " << d.size() << endl;

    cout << "\nPrint the deque ..." << endl;
    copy ( d.begin(), d.end(), ostream_iterator<int>( cout, "\t" ) ); 
    cout << endl;

    return 0;
}
