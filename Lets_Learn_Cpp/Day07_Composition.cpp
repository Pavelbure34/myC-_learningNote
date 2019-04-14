#include <iostream>
#include <string>
#include "Car.h"
#include "Person.h"
using namespace std;

/* C++ class can take take object from other class as member.
 There, Racer has car and racer. Car has model and racer has name.
 Since they are private and regular member, we can initalize them with 
 member initializer tho they are not const object.

 Each part member functions and member variables names are all combined to make
 a single object. It is called Composition.
*/

class Racer{
private:
	Car car;
	Person racer;
	
public:
	Racer(string model, string name) : car(model), racer(name){}

public:
	void Info() {
		//car.DRIVE();
		//racer.LogInfo();
		// same as below
		Car *pCar = &car;
		Person *pRacer = &racer;
		pCar -> DRIVE();
		pRacer -> LogInfo();
	}
};

int main() {
	Racer Mark("Maserati", "Mark");
	Racer *pMark = &Mark;
	pMark -> Info();
	cout << "-----------------------" << endl;
	//or
	Mark.Info();
	//the same.
}