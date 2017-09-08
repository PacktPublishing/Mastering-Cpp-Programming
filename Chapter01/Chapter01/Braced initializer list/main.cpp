#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main ( ) {

        //Equivalent to std::initializer_list<int>
        auto intInitializerValues = { 1, 2, 3, 4, 5 };
   
        //Equivalent to std::initializer_list<double>
        auto doubleInitializerValues = { 1.5, 2.5, 3.5 };

        //Will not compile as it will be deduced to conflicting data types
        //while all data types should be same, in this case it is double, int and float
        //which will be deduced as double and int by the compiler, hence it won't compile
        //auto t = { 1.0, 1, 2.0f }; 

        vector<int> vectorOfIntegers = intInitializerValues;
        vector<double> vectorOfDoubles = doubleInitializerValues;

        cout << "\nValues in integer vectors are ..." << endl;
        copy ( vectorOfIntegers.begin(), vectorOfIntegers.end(), ostream_iterator<int> ( cout, "\t" ) );
        cout << endl;

        cout << "\nValues in double vectors are ..." << endl;
        copy ( vectorOfDoubles.begin(), vectorOfDoubles.end(), ostream_iterator<double> ( cout, "\t" ) );
        cout << endl;

        return 0;
}