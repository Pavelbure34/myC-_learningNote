#include <iostream>
#include <string>
using namespace std;

/* CPP is an object oriented programming language(OOP).
	One of the most important factor for OOP is class and objects.
	Which is the striking difference between CPP and its father C language.
	
	**Class: it is simply a data type. When you create a class, it is equivalent to
	creating your own data type for your program. In order to make it easy to understand,
	Maserati and Porsche are both different cars but they are subject to car family.
	Car is the class for both Maserati and Porsche. It is called Abstraction, which 
	represents the concept that you do not need to define nor study to understand.
	In computer programming, you can create your own abstraction for your data.
	It is done with class. Below is the basic format of CPP class.
*/

class MyClass {
private: // (III) above four variables are field for MyClass.
	int a;
	double b;
	char c;
	string d;

public: // (I) this is the access specifier.
	MyClass(int a, double b, char c, string d)
	:a(a), b(b), c(c), d(d){  // (II) this is the constructor
	}

	MyClass(int a, double b, char c, string d) {  // (II) this is the constructor
		setInt(a);
		setDouble(b);
		setChar(c);
		setString(d);
	}

	MyClass(string g) {
		setInt(10);
		setDouble(3.14);
		setChar('c');
		setString("I got it.");
	}

	MyClass() {

	}

	~MyClass() {
		//destructor
	}

public: //(IV) methods are functions related to the class.

	// (V) These are setter methods
	void setInt(int num) {
		a = num;
	}

	void setDouble(double num) {
		b = num;
	}

	void setChar(char chart) {
		c = chart;
	}

	void setString(string str) {
		d = str;
	}

	// (VI) these are getter methods.
	int getInt() {
		return a;
	}

	double getDouble() {
		return b;
	}

	char getChar() {
		return c;
	}

	string getStr() {
		return d;
	}

	void LogField() {
		cout << "int a =  " << a << endl;
		cout << "double b = " << b << endl;
		cout << "char c = " << c << endl;
		cout << "string d = " << d << endl;
	}

};

/* I. Access Specifiers: it determines the accessibility. 
	<Public Private Protected>
		a. public : it is accessible by outer functions.
		b. private: it is only accessible by the object.
		c. protected: it is only accessible among classes with inherited relationship.
*/

/* II. Constructor: It determines how the object should be generated.
	You can ignore constructor but it is better to specify how it should be created.
	It is called only once when object is instantiated.
	you can have multiple Constructors depending on how the object is instantiated.
*/

/* III. Field: It is the variable related to the class.
	If private, only the object can gain access to them.
	You need getter and setter methods to modify and retrieve them when private.
*/

/* IV, Methods: Functions related to class are methods. : Running to Car class.
*/

/* V. Getter methods retrieve private fields.
*/

int main() {
	MyClass obj1;                 //first object is created with default
	MyClass obj2(14, 3.56, 'd', "I do noot know"); //second object is created with specific values.
	MyClass obj3("Yaho");         //third object is created with one string.
	cout << "---------------------" << endl;
	obj1.LogField();
	cout << "---------------------" << endl;
	obj2.LogField();
	cout << "---------------------" << endl;
	obj3.LogField();
}