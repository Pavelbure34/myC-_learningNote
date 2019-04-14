#include <iostream>
#include <string>
using namespace std;

	/* Today we are gonna learn the most important part of OOP.
		Among inheritance, encapsulation, and polymorphism, we are gonna go
		over inheritance.
			a. Class that plays the role of the original or super class are
			    called mother class.
			b. Derived class under the super classes are called daughter or
			    sub classes.
		Format)
			class SuperClass{
			}

			class SubClass : public SuperClass{
			}

		There are some characteristics of inherited relationship.
			a. sub classes can gain access to every member variable or function
			    from the mother class while the mother cannot to child class.
			b. Sub Class can overRide the same function from mother class.
			c. While Java do not, CPP allows multiple inheritance.
	
		There are three way to inherit
			a. public inheritance Most commonly used. Every member of mother public to child.
			b. private inheritance : when not defined, inheritance is private by default.
				b-1. child class cannot gain access to mother class.
			c. protected inheritance
				c-1. mother member protected to child class.
	*/

class SuperClass {
protected://member variables
	int num1;
	double num2;

public: //constructors
	SuperClass(){

	}

	SuperClass(int var1, double var2)
	:num1(var1), num2(var2){

	}

	/*~SuperClass() {
		cout << "Destructor for Mother Class" << endl;
	}*/

public: //member functions
	void myFunc() {
		cout << "This is mother function." << endl;
	}

	void LogInfo() {
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

class SubClass : public SuperClass {  //when inheritanceType is not defined, it is private in default
protected:  //member
	int num3;
	double num4;

public: //constructor and destructor
	SubClass() {
		//SuperClass(); mother class is generated for each object of child class.
	}

	SubClass(int var1, double var2)
	: num3(var1), num4(var2){
		//SuperClass(var1, var2); this is automatically made.
	}

	~SubClass() {  //destructor
		cout << "Destructor for sub class" << endl;
	}

public: //member functions
	void myFunc() {
		cout << "This is OverRiden Daughter Function" << endl;
	}

	void LogInfo() {
		cout << num1 << endl;
		cout << num2 << endl;
		cout << "From now on it is duaghter's." << endl;
		cout << num3 << endl;
		cout << num4 << endl;
	}

	void myOriginFunc() {
		cout << "this is only in Daughter Class" << endl;
	}
};

int main() {
	SubClass child(10,2.4);
	child.myOriginFunc();
	child.myFunc();
	child.LogInfo();
	cout << "----------------" << endl;
	SuperClass CastedChild = (SuperClass)child;  //this is possible due to public inheritance.
	//TypeCasting is required for subclass to use member of mother class.
	//in order to allow this, members has to be protected and inheritance should be public,
	CastedChild.myFunc();
	CastedChild.LogInfo();
	//CastedChild.myOriginFunc();   //SuperClass cannnot gain access to subClass functions.


}
