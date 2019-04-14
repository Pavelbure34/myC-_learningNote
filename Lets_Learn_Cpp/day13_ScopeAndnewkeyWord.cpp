#include <iostream>
#include <string>
using namespace std;
/*
*/

void Scope() {
	int x = 5;
	int intArr[5];
	//when both data is out of this block, they die,
}

class Pavel {
public:
	~Pavel() {
		cout << "it has been destructed." << endl;
	}

};

void JustSee() {
	
}


int main() {
	Pavel* obj = new Pavel();
	Pavel obj2; //this die when out of this block.
	obj->~Pavel();
	//same logic for class object.
	//if it is class, call destructor.

	int intARR[5];
	//vs.
	int* intArr = new int[5];
	delete[] intArr; //this is how you delete dynamically allocated array.
	//intARR and intArr are totally different.
	/* The latter is dynamically allocated so it needs to be manually deleted.
		However the former is limited to the block where it belongs to.
		The keyword new allocates memory in the heap, which is reference data memory
		so when a variable or array is named with new, you need to use pointer.
	*/
	intArr[0] = 1;
	cout << intArr[0] << endl;

	int* number = new int;
	*number = 5;
	delete number;

	int num = 5;
	//same logic for basic data type.

	//remember that you have to manually delete it!

	cout << "The value " << *number << "'s address in memory is " << number << ". " << endl;

}