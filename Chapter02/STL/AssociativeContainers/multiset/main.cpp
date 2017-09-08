#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main( ) {

    multimap< string, long > contacts = {

	    { "Jegan", 2232342343  },
	    { "Meena", 3243435343  },
	    { "Nitesh",6234324343  },
	    { "Sriram",8932443241  },
	    { "Nitesh",5534327346  }

    };

    auto pos  = contacts.find ( "Nitesh" );
    int count = contacts.count( "Nitesh" );
    int index = 0;

    while ( pos != contacts.end() ) {
	    cout << "\nMobile number of " << pos->first << " is " << pos->second << endl;
	    ++index;
	    if ( index == count ) 
		break;
    }

    cout << "--------------------------------------------------------------" << endl;

    pos = contacts.begin();

    while ( pos != contacts.end() ) { 
	    cout << "\nMobile number of " << pos->first << " is " << pos->second << endl;
    	    ++pos;
    }


    return 0;
}
