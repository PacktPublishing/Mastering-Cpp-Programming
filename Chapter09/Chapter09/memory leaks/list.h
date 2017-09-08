#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};

class List {
private:
	Node *pNewNode;
	Node *pHead;
	Node *pTail;
	int __size;
	void createNewNode( int );
public:
	List();
	~List();
	int size();
	void append ( int data );
	void print( );
};
