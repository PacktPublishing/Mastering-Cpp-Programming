
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main ( ) {
   list<int> l = { 100, 20, 5, 80, 50 };

   cout << "\nPrint the list before sorting ..." << endl;
   copy ( l.begin(), l.end(), ostream_iterator<int>(cout, "-->") );    
   cout << "X" << endl;

   l.sort();

   cout << "\nPrint the list after sorting ..." << endl;
   copy ( l.begin(), l.end(), ostream_iterator<int>(cout, "-->") );    
   cout << "X" << endl;

   return 0;
}
