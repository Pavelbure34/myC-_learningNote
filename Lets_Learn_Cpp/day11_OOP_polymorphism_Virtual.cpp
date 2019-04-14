#include <iostream>
#include <string>
using namespace std;

	/* Polymorphism is the second important part of OOP.
		It simply means that one function can have multiple implementation.
		They come in OverRide and OverLoad.
	*/

//overLoading: different implementation of the same funciton.
//keep everything the same but the parameter;
//1. have different types of parameter
void math_(int x, int y) {
	cout << "The result is " << x * y << ". " << endl;
}

void math_(double x, double y) {
	cout << "The result is " << x * y << ". " << endl;
}

//2. the order of parameters.
void math_(int x, double y) {
	cout << "The Result is " << (double)x * y << ". " << endl;
}

void math_(double x, int y) {
	cout << "The Result is " << (double)y * x << ". " << endl;
}

//3. the number of parameters.
void math_(int x, int y, int z) {
	cout << "The result is " << x * y  * z << ". " << endl;
}

//not only functions, you can overload constructor in class.

//OverRiding and Virtual: a redefinition of the same function under inheritance.
//keep everything the same but the code inside.

//class including pure virtual functions are abstract class.
//it cannot be made into object.
class SuperClass { 
public:
	virtual void myFunc() = 0; //works just like abstract methid in JAVA,
	//here, Virtual functions mark the original class before it is gonna be overRide.
};

class Derived1 : public SuperClass {
public:
	void myFunc() { //then see here.
		cout << "this is Derived 1 function" << endl;
	}
};

class Derived2 : public SuperClass {
public:
	void myFunc() {
		cout << "this is Derived 2 function" << endl;
	}
};

int main() {
	math_(3,4);
	math_(2.4, 3.5);
	math_(3, 4.6);
	math_(4.3, 4);
	math_(3,4,5);
	cout << "----------------------" << endl;

	Derived1 sub1;
	Derived2 sub2;
	SuperClass *psub1 = &sub1;
	SuperClass *psub2 = &sub2;
	psub1->myFunc();
	psub2->myFunc();
	
}