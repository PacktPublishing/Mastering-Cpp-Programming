#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
class MyTemplateClass {
public:
	void F1( T1 t1, T2 t2, T3 t3 ) {
		cout << "\nPrimary Template Class - Function F1 invoked ..." << endl;

		cout << "Value of t1 is " << t1 << endl; 
		cout << "Value of t2 is " << t2 << endl; 
		cout << "Value of t3 is " << t3 << endl; 
	}

	void F2(T1 t1, T2 t2) {
		cout << "\nPrimary Tempalte Class - Function F2 invoked ..." << endl;

		cout << "Value of t1 is " << t1 << endl; 
		cout << "Value of t2 is " << 2 * t2 << endl; 
	}
};

template <class T1, class T2, class T3>
class MyTemplateClass< T1, T2*, T3*> : public MyTemplateClass<T1, T2, T3> {
public:
	void F1( T1 t1, T2* t2, T3* t3 ) {
		cout << "\nPartially Specialized Template Classs - Function F1 invoked ..." << endl;
		cout << "Value of t1 is " << t1 << endl; 
		cout << "Value of t2 is " << *t2 << endl; 
		cout << "Value of t3 is " << *t3 << endl; 
	}
};
