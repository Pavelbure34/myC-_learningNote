#include <iostream>
using namespace std;

//function can pass the data by reference when dealing data of arrays.
void LogArr(int* parr, int size) {
	for (int i = 0; i < size; i++) {
		if ((i % 5 == 0) & (i != 0))
			cout << endl;
		cout << *(parr + i) << " ";
	}	
}

void InputArr(int* parr, int size) {
	for (int i = 0; i < size; i++) {
		*(parr + i) = i + 1;
	}
}

void Basic() {
	int intArr[10] = { 0, };
	int size = sizeof(intArr) / sizeof(int);
	InputArr(intArr, size);
	LogArr(intArr, size);
}

/*Like this, using pointers can directly modify the variables,
*/

int main() {
	Basic();
}