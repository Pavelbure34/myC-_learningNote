#include <iostream>
#include <string>
#include <exception>
using namespace std;

/* Exceptions occur all the time when programming is running.
	When the error occurs, program crashes and that is not desired at all.
	So in order to stop the program from closing due to error, we do something
	called exceptionhandling.
*/

void ExceptionExample() {
	while (true) {
		try {
			int num1, num2;
			cin >> num1;
			cin >> num2;
			if (num2 == 0)
				throw 0;
			cout << "Result is " << num1 / num2 << ". " << endl;
			break;
		}
		catch (...) { //... covers all the exception.
			cout << "Divisision by Zero!" << endl;
			continue;
		}
	}
}

void ExceptionExample2() {
	while (true) {
		try {
			int num1, num2;
			cin >> num1;
			cin >> num2;
			if (num2 == 0)
				throw 0;
			cout << "Result is " << num1 / num2 << ". " << endl;
			break;
		}
		catch (int x) { //or you can do this! int type exception it can come with other data types.
			cout << "Divisision by Zero!" << endl;
			continue;
		}
	}
}

/* You can make your own exception by inheriting exception class.
	First make struct and inherit exception class. Since you have no reason
	to make other class inherit your excpetion, struct is just fine.
*/

struct HPNegativeException : public exception {
	const char * what() const throw() {
		return "HP cannot be negative";
	}
};

void ExceptionExample3() {
	while (true) {
		try {
			int HP = 10;
			int change;
			cin >> change;
			if (change > 10)
				throw new HPNegativeException;
			else
				throw new exception;
			cout << "HP: " << HP  - change << endl;
			break;
		}
		catch (HPNegativeException) { 
			continue;
		}
		catch (exception) {
			cout << "Please write Integer." << endl;
			continue;
		}
	}
}

int main() {
	ExceptionExample3();
}