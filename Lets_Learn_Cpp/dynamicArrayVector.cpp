#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>  //import the vector header.
#include <list>
#include <stack>
#include <array>
using namespace std;

/* Dynamic Array is an array that fits its size automatically.
	Vector is one of those kind.

	There are number methods in vector.
	1. push_back(item) : insert the item inside the vector at the end.
	2. erase : delete the data in the vector.
	3. pop_back : remove the last element.
	4. size() : get the size of the vector.
*/


void VectorExample() {
	array<int, 2> intArr{ 10,12 };

	vector<int> intVector;
	intVector.push_back(1);
	intVector.push_back(2);
	intVector.push_back(3);//adding item to the last.
	intVector.pop_back(); //deleting last element
	intVector.insert(intVector.begin(),intArr.begin(),intArr.end());//copying  intArr into intVector
	cout << intVector.size() << endl;
	int count = 1;
	for (int item : intVector) {
		cout << count << ", " << item << endl;
		count++;
	}
	intVector.clear();
	cout << intVector.size() << endl;
}

void newArrayExample() {
	/*
		Since C+11, array has been added to collection library.
		Unlike built-in array, iterator works for collection array.
		but it behaves the same as built-in array.
			-fixed size.
			-index
	*/
	array<int,7> intArr{1,2,3,4,5,6,7};
	cout << intArr[0] << endl;
}

void listExample() {
	/*
		this is list. it stores the element.
		The key difference from the vector is that 
			1. random access by index is not possible in list.
			2. has to loop through iterator or item by item to search.
			3. instead of index, you can go through each item.
	*/
	list<int> intListA;
	list<int> intListB;

}

void stackExample() {
	/*
		you can only add or remove at the top element.
		Using push and pop.
	*/
	vector<int> intVec;
	stack<int> intStack;
	intStack.push(1);
	intStack.push(2);
	intStack.push(20);
	int num = 10;
	int temp;
	while (!intStack.empty()) {
		if (intStack.top() > num) {
			intVec.push_back(intStack.top());
			intStack.pop();
		}
		else {
			intStack.push(num);
			break;
		}
	}
	for (int i = intVec.size()-1; i >= 0; i--) {
		intStack.push(intVec[i]);
	}
	intVec.clear();
	while (!intStack.empty()){
		cout << intStack.top() << ", ";
		intStack.pop();
	}
	cout << endl;
}

int main() {
	stackExample();
	cin.get();
}