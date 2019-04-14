#include <iostream>
#include <string>
using namespace std;

/* Const Values are variables that cannot be changed. It is equivalent to static final in
	   Java and C#.
	I.Striking charactersitics of const functions and objects, and variables are that
	const objects and variables should be used with const functions.
	II.Regular functions and variables cannot be used with anything const in c++.
	III.They should be initialized when created.

	However, member initializer is recommended to use on const members of the class.
	*/

class MyClass {
public:
	MyClass() {}
	void MyFunc() const;  //const function.
};
const string str = "hello";

class Car {
private:  //private regular and private const member.
	string color;
	const string model;

protected: //regular member
	int var1;
	double var2;

public:
	Car(string c, string m) //Note the syntax of the list.
	: color(c), model(m)  //this is the member initializer in the constructor.
	{                     //they can be applied to both const and any member under private access.
		var1 = 1;
		var2 = 10.0;
	}
};

void main() {
	
	const MyClass myclass; //const object.
}