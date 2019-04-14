#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#define FULL_PRIZE "3000$"
#define HALF_PRIZE "1500$"
#define NO_PRIZE "0$"
using namespace std;

void Basic() {
	srand(time(0));

	int a;
	for (int i = 0; i < 11; i++) {
		a = 1 + (rand() % 9);
		cout << "the " << i << "th Random number is " << a << ". " << endl;
	}
	
}

void Lottery() {
	srand(time(0));

	int answerNum1, answerNum2, guessNum1, guessNum2;
	answerNum1 = 1 + rand() % 100;
	answerNum2 = 1 + rand() % 100;
	cout << "Answer: " << answerNum1 << ", " << answerNum2 << endl;
	cout << "Guess the two numbers:" << endl;
	cout << ">> ";
	cin >> guessNum1;
	cout << ">> ";
	cin >> guessNum2;
	string message = ((answerNum1 == guessNum1 || answerNum1 == guessNum2) and (answerNum2 == guessNum1 || answerNum2 == guessNum2))?
			FULL_PRIZE:
		(((answerNum1 == guessNum1 || answerNum1 == guessNum2) and (answerNum2 != guessNum1 || answerNum2 != guessNum2)) ||
		((answerNum2 == guessNum1 || answerNum2 == guessNum2) and (answerNum1 != guessNum1 || answerNum1 != guessNum2)))?
		HALF_PRIZE : NO_PRIZE;
	cout << message << endl;
}



void main() {
	//Basic();
	Lottery();
}