#include <iostream>
#include <string>
using namespace std;

/* The third most important part of OOP is encapsulation.
	It simply means that you hide important information of the program
	and selectively show the part of it by using protected or private access specifiers.
*/

class SuperClass {
protected:
	int x;
	int y;
};

//In SuperClass, x and y are protected, meaning only inheirited class can gain access
//to it.
class SubClass : public SuperClass {
public:
	void setX(int num) {
		this->x = num;
		//(*this).x = num;
		//x = num;
	}

	void setY(int num) {
		this->y = num;
		//(*this).y = num;
		//y = num;
	}

	void Loginfo() {
		cout << "Value of x is " << this->x << ". " << endl;
		cout << "Value of y is " << this->y << ". " << endl;
	}
};

int main() {
	SubClass example;
	example.setX(3);
	example.setY(5);
	example.Loginfo();
}