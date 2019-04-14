#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


void QQ17(int N) {
	int count = 0;	
	for (int hr = 0; hr <= 23; hr++) {
		if (hr == N || hr % 10 == N)
			count += 3600;
		for (int min = 0; min <= 59; min++) {
			if (min == N || min % 10 == N)
				count += 60;
			for (int sec = 0; sec <= 59; sec++) {
				if (sec == N || sec % 10 == N)
					count++;
			}
		}
	}
	cout << count << endl;
}


int Divisible(int num) {
	int count = 0;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0)
			count++;
	}
	return count;
}

void perfectSquare(int a, int b) {
	for (int i = a; i <= b; i++) {
		if (Divisible(i) % 2 == 1)
			cout << i << " ";
	}
}

void PWHACK(int num) {//solved
	int x = 0;
	int y = 0;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			int divisibleX = 0;
			for (int j = 1; j <= i; j++) {
				if (i % j == 0 && j > 1) {
					divisibleX = j;
					break;
				}
			}

			int divisibleY = 0;
			for (int z = 1; z <= (num / i); z++) {
				if ((num / i) % z == 0 && z > 1) {
					divisibleY = z;
					break;
				}
			}

			if (divisibleX == i && divisibleY == (num / i)) {
				x = divisibleX;
				y = divisibleY;
				break;
			}
		}
	}
	if (x != 0 && y != 0)
		cout << num << " is " << x << " x " << y << endl;
	else
		cout << "IMPOSSIBLE" << endl;
}

int FiboNachi(int N) {//solved
	if (N == 1 || N == 2) {
		return 1;
	}
	else{
		int NthNum;
		int prevNum = 0;
		int ithNum = 1;
		for (int i = 1; i < N; i++) {
			if (i == 1) {
				NthNum = prevNum + ithNum;
			}
			else if (i == 2) {
				prevNum = ithNum;
				ithNum = NthNum;
				NthNum = prevNum + ithNum;
			}
			else {
				prevNum = ithNum;
				ithNum = NthNum;
				NthNum = prevNum + ithNum;
			}
		}
		return NthNum;
	}
}

void Input(int* pointer) {
	cout << "please choose any integer between 1 and 45>> ";
	cin >> *pointer;
}

void Lotto() {//solved
	srand(time(0));

	int count = 0;
	int ans[6];
	int myPick[6];
	int commonNum[6] = { -1, };
	int myBonusPick;
	int randNum;
	int UserInput;
	int *pUserInput = &UserInput;

	int bonus = (rand() % 45) + 1;
	int *PmyBonusPick = &myBonusPick;
	cout << "This is bonus number pick." << endl;
	Input(PmyBonusPick);

	for (int i = 0; i < sizeof(ans) / sizeof(int); i++) {
		randNum = (rand() % 45) + 1;
		ans[i] = randNum;
	}

	cout << "Number Generated COMPLETE." << endl;

	cout << "Now is the 6 number pick" << endl;
	for (int i = 0; i < sizeof(ans) / sizeof(int); i++) {
		Input(pUserInput);
		myPick[i] = UserInput;
	}

	for (int i = 0; i < sizeof(ans) / sizeof(int); i++) {
		for (int j = 0; j < sizeof(ans) / sizeof(int); j++) {
			if (myPick[i] == ans[j])
				count++;
		}
	}

	switch (count) {
	case 6:
		cout << "first place" << endl;
		break;
	case 5:
		if (bonus == myBonusPick)
			cout << "second place" << endl;
		else
			cout << "third place" << endl;
		break;
	case 4:
		cout << "fourth place" << endl;
		break;
	default:
		cout << "YOU FAILED TO GET LOTTERY." << endl;
		break;
	}
}

int LastDate(int year, int month) {
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 11:
		return 31;
	case 2:
		if (year % 4 == 0 || year % 400 == 0)
			return 29;
		else
			return 28;
	case 4:
	case 6:
	case 8:
	case 10:
		return 30;
	case 12:
		if (year % 4 == 0 || year % 400 == 0)
			return 31;
		else
			return 30;
	}
}

int main() {
	/*cout << LastDate(1998, 12) << endl;
	cout << LastDate(2002, 5) << endl;
	cout << LastDate(2000, 2) << endl;
	cout << LastDate(500, 5) << endl;
	cout << LastDate(1998, 7) << endl;*/
	QQ17(1);
	QQ17(3);
}