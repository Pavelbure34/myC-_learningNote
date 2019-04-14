#pragma once
#include <iostream>
#include <string>
using namespace std;

//it is always better to make a separate header for class.

class Car {
	//memeber
private:
	//string color;
	string model;
	//double milage;
	//string *pcolor = &color;
	//string *pmodel = &model;
	//double *pmilage = &milage;

	//constructor
public:
	//Car() {   //basic
	//	setColor();
	//	setModel();
	//	setMG();
	//}

	Car(string model)
	:model(model){  //overloadine 1
		//*pmodel = model  without pointers, you can use member initializer.
		//setColor();
		//setMG();
	}

	//Car(string model, string color)
	//:model(model), color(color){   //overloading 2
	//	//*pmodel = model;
	//	//*pcolor = color;
	//	setMG();
	//}

//	Car(string model, string color, double milage)
//	:model(model), color(color), milage(milage){
//		//*pmodel = model;
//		//*pcolor = color;
//		//*pmilage = milage;
//		cout << "Constrcuted " << endl;
//	}
//
//	~Car() { //Destructor!
//		cout << "Destroyed Complete!" << endl;
//	}
//
//	//properties
//public:
//	void setColor() {
//		cout << "Please choose the color>> ";
//		cin >> color;
//	}
//
//	void setModel() {
//		cout << "please choose the model.";
//		cin >> model;
//	}
//
//	void setMG() {
//		while (true) {
//			try {
//				cout << "Please choose the milage.";
//				cin >> milage;
//				break;
//			}
//			catch (exception e) {
//				cout << "Please type in double." << endl;
//				continue;
//			}
//		}
//	}
//
	void DRIVE() {
		cout << "your " << model << " is running." << endl;
	}
//
//	void LogInfo() {
//		cout << "-----------------------------------" << endl;
//		cout << "Model:     " << model << endl;
//		cout << "Color:     " << color << endl;
//		cout << "milage:    " << milage << endl;
//	}
};