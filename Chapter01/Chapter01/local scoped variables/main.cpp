#include <iostream>
using namespace std;

bool isGoodToProceed( ) {
    return true;
}

bool isGood( ) {
     return true;
}

void functionWithSwitchStatement( ) {

     switch ( auto status = isGood( ) ) {
          case true:
                 cout << "\nAll good!" << endl;
          break;

          case false:
                 cout << "\nSomething gone bad" << endl;
          break;
     } 

}

int main ( ) {

    if ( auto flag = isGoodToProceed( ) ) {
         cout << "flag is a local variable and it loses its scope outside the if block" << endl;
    }
    
     functionWithSwitchStatement();

     return 0;
}