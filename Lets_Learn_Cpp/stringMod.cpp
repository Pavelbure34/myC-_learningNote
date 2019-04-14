#include <iostream>
#include <string>
using namespace std;

void stringModify() {
	string sTr = "This is the string.";
	sTr.replace(0,4,"These");
	cout << sTr << endl;
}


int main() {
	stringModify();
	return 0;
}