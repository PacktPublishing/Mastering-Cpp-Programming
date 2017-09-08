#include "list.h"

List::List( ) {
	pNewNode = NULL;
	pHead = NULL;
	pTail = NULL;
	__size = 0;
}

List::~List() {}

void List::createNewNode( int data ) {
	pNewNode = new Node();
	pNewNode->next = NULL;
	pNewNode->data = data;
}

void List::append( int data ) {
	createNewNode( data );
	if ( pHead == NULL ) {
		pHead = pNewNode;
		pTail = pNewNode;
		__size = 1;
	}
	else {
		Node *pCurrentNode = pHead;
		while ( pCurrentNode != NULL ) {
			if ( pCurrentNode->next == NULL ) break;
			pCurrentNode = pCurrentNode->next;
		}

		pCurrentNode->next = pNewNode;
		++__size;
	}
}

void List::print( ) {
	cout << "\nList entries are ..." << endl;
	Node *pCurrentNode = pHead;
	while ( pCurrentNode != NULL ) {
		cout << pCurrentNode->data << "\t";
		pCurrentNode = pCurrentNode->next;
	}
	cout << endl;
}

