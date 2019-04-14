#include <iostream>
#include <string>
using namespace std;

class FRIEND{
private: //member variable
	int num1;
	char var1;
	double num2;
	string var2;

public: //constructor
	FRIEND(){}

public: //member functions

	/* external functions cannot gain access to private members of the class normally.
		However, you can set up friend specifier to a function and it allows that function
		to gain access to every element of the class.
		Below is the exemplery.
	*/

public:
	friend void setVar(FRIEND &obj);
	/* Note the parameter of the function. It takes the address of the object instantiated
		from the matching class. Since object is reference data type. 
	   Note that friend function is an external function. Naturally, external function
	   cannot gain access to members of the class. However, friend keyword allows
	   it to gain access to it.
	*/

	void LogInfo() {
		cout << num1 << endl;
		cout << var1 << endl;
		cout << num2 << endl;
		cout << var2 << endl;
	}
};

void setVar(FRIEND &obj) {
	obj.num1 = 5;
	obj.var1 = 'd';
	obj.num2 = 3.14;
	obj.var2 = "This is friendly function.";
}

class THIS{
private:
	int var1;
	double var2;
	char var3;
	string var4;

public:
	THIS(){}

public:
	/* this keyword refers to the object of the class itself.
	It is used within the class to refer to its object,
	and it is the pointer to the object of the its class.
	since this itself is the pointer to the object of its class,
	you handle it like pointers.
		*/
	void setVar(int a) {
		switch (a) {
		case 1:   //first method to use this.
			this->var1 = 70;
			this->var2 = 3.12;
			this->var3 = 'b';
			this->var4 = "This is this keyword method1";
			break;
		case 2: //second method to use this
			(*this).var1 = 80;
			(*this).var2 = 3.13;
			(*this).var3 = 'c';
			(*this).var4 = "This is this keyword method2";
			break;
		case 3: //normal way we used to do without this
			var1 = 90;
			var2 = 3.14;
			var3 = 'd';
			var4 = "This is wihtout this.";
			break;
		}	
	}

	void LogInfo() {
		cout << var1 << endl;
		cout << var2 << endl;
		cout << var3 << endl;
		cout << var4 << endl;
	}
	/* this keyword is essential when overloading operation.
		we will deal with it later.
	*/
};


int main() {
	/*FRIEND example1;
	example1.LogInfo();
	cout << "---------------------" << endl;
	setVar(example1);
	example1.LogInfo();*/

	/*THIS example2;
	example2.setVar(1);
	example2.setVar(2);
	example2.setVar(3);
	example2.LogInfo();*/

}