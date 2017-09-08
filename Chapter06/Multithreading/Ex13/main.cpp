#include <iostream>
#include <future>
#include <climits>
#include <exception>
using namespace std;

void add ( int firstInput, int secondInput, promise<int> output ) {

	try {
         if ( (  INT_MAX == firstInput ) || ( INT_MAX == secondInput ) )
             output.set_exception( current_exception() ) ;
        }
	catch(...) {}

       output.set_value( firstInput + secondInput ) ;

}

int main ( ) {


     try {
	  promise<int> promise_;
          future<int> output = promise_.get_future();
	  async ( launch::deferred, add, INT_MAX, INT_MAX, move(promise_) );
          cout << "The sum of INT_MAX + INT_MAX is " << output.get ( ) << endl;
     }
     catch( exception e ) {
	cerr << "Exception occured" << endl;
     }
}
