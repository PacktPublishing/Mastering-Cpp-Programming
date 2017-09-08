#include <iostream>
#include <tuple>
using namespace std;

int main ( ) {

    tuple<string,int> student("Sriram", 10);
    auto [name, age] = student;

    cout << "\nName of the student is " << name << endl;
    cout << "Age of the student is " << age << endl;

    return 0;
}