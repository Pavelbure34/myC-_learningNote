#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*Quiz
Write a program that would take user input for integer.
The function generates the random integer between 1 and 100.
User has to take a guess.
*/

void UserInput(int* pint) {
	while (true) {
		try {
			cout << "Please Type an integer: ";
			cin >> *pint;
			break;
		}
		catch (exception e) {
			cout << "Please write an integer." << endl;
		}
	}
}

void LogResult(int* pint, int ans) {
	int diff = ans - *pint;
	if (diff > 0) {
		if (diff < 5)
			cout << "Very Very Close, Keep it up," << endl;
			
		else if (diff < 10)
			cout << "Little bit big. I think." << endl;
		else
			cout << "Bigger than this please." << endl;
	}
	else
		cout << "Your guess is bigger than the answer." << endl;
}

void Quiz() {
	srand(time(0));
	int ans = (rand() % 100) + 1;
	int userInput;
	
	int* pint = &userInput;
	while (true) {
		UserInput(pint);
		if (*pint == ans) {
			cout << "Congratulations! You have got it rigth." << endl;
			break;
		}
		else 
			LogResult(pint, ans);
	}
}

int main() {
	Quiz();
}
