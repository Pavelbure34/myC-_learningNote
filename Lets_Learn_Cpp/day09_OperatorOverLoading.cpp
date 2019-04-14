#include <iostream>
#include <string>
using namespace std;

/*  Overloaded Operators are functions. Here is the format of it,
	Format)
		NameOfClass operator + (NameOfClass &obj){
		NameOfClass newObj;
		NameOfClass obj1, obj2;
		newObj = obj1 + obj2;
		return new Obj;
		}
	AS seen above, you return a object which is the oepartion between two different
	objects with the same class. It allows you to create a new object with existing objects
	with the same class.
		
*/

class OVERLOAD_OP {
private: //memeber variable
	int num1;
	double var1;

public:  //constructor
	OVERLOAD_OP(){}                                 //default constructor
	OVERLOAD_OP(int a, double b) : num1(a), var1(b){}//overloaded constructor
	 
public:  //member methods.

	void LogInfo() {
		cout << num1 << endl;
		cout << var1 << endl;
	}
	//Based on the operator type, it can be overloaded.
	OVERLOAD_OP operator + (OVERLOAD_OP &obj) {
		OVERLOAD_OP example1;
		example1.num1 = num1 + obj.num1;
		example1.var1 = var1 + obj.var1;
		return example1;
	}

	OVERLOAD_OP operator - (OVERLOAD_OP &obj) {
		OVERLOAD_OP example1;
		example1.num1 = num1 - obj.num1;
		example1.var1 = var1 - obj.var1;
		return example1;
	}

	OVERLOAD_OP operator * (OVERLOAD_OP &obj) {
		OVERLOAD_OP example1;
		example1.num1 = num1 * obj.num1;
		example1.var1 = var1 * obj.var1;
		return example1;
	}
};

int main() {
	OVERLOAD_OP example2;
	OVERLOAD_OP obj1(3, 3.14), obj2(10, 3.15);
	example2 = obj1 + obj2;
	example2.LogInfo();
	OVERLOAD_OP example3 = obj1 - obj2;
	example3.LogInfo();
	OVERLOAD_OP example4 = obj1 * obj2;
	example4.LogInfo();
}