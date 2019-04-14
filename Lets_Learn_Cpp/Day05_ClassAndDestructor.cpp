#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

/* Today we are gonna learn C++ Class. 
	It is always to create class in a separate file so that it is easy to modify the code.
	We have gone through the basic concept of class and object in Day04.
	In this class we are gonna show you some cool features of c++ class.

	Here, Car class is created in the separate header file. By including Car,h
	you can gain access to that class and its properties and even make object from it,

	Destructor: it is called when the object is deleted or destroyed.
	For Car class, its destructor would like like this.
	Format) ~Car(){  };
	Note the ~ tilde symbol at the beginning of the constructor.
	There are certain Characterictics about it.
		I. it cannot take any parameters
		II. it cannot be overloaded.
		III. It is optional so if you don;t need it. do not make it,
		IV. Only one destructor per class.
		V.called when object that class is deleted,

	Destructor is used when
		I.you deallocate memory after being used,
*/

void DestructorExperiment() {
	Car car3("Audi R8", "red", 3.4);
}

//or..
int main() {
	//Car car1;
	Car car2("Maserati Ghibli");
	car2.~Car();  //you can call destructor like this!.
	//DestructorExperiment();
}