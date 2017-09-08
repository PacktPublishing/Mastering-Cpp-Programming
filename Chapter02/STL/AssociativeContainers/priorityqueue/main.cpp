#include <iostream>
#include <queue>
#include <iterator>
#include <algorithm>
using namespace std;

int main ( ) {

	priority_queue<int> q;

	q.push( 100 );
	q.push( 50 );
	q.push( 1000 );
	q.push( 800 );
	q.push( 300 );

	cout << "Priority queue values are ..." << endl;
	while ( ! q.empty() ) {
		cout << q.top() << "\t";
		q.pop();
	}
	cout << endl;


	return 0;
}
