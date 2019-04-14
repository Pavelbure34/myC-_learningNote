#include <iostream>
#include <string>
using namespace std;

/* Template allows you to use the same function with different data type.
	IT is also part of C++'s OOP. Let's explain what template does in the
	real life example. Here I have made a function called Multiple.
	It returns the multiplied value of two numbers.
*/


//This is template in function.
template <class Darin>
Darin Multiple(Darin x, Darin y) {
	return x * y;
}

template <class Sinatra, class Martin>
Sinatra Sum(Sinatra x, Martin y) {
	return x + y;
}

/* Note that type Called Darin can be anything.
   So when integer comes, it is changed as int
   when double number comes , it is changed as double.
*/

//now let's go over how template works in class.
template <class specie>
class animal {
private:
	specie type;

public:
	animal(specie typeName)
	: type(typeName){
		cout << "This is class template for generic types." << endl;
	}
};

/* Bascially it does the same thing with the class as with function.
	However, you can specialize the template.
*/

template <>  //note that this bracket is close.
class animal<string> { //note that data type is specified here.
private:
	string type;

public:
	animal(string typeName)
	: type(typeName){
		cout << "This is specialized in string." << endl;
	}
};

int main() {
	cout << Multiple(3, 4) << endl;
	cout << Multiple(3.14, 2.54) << endl;
	cout << Sum(3.14, 5) << endl;
	animal<double> example(3.14);        //this is how you create an object
	animal <int> example2(3);			 //based on the template class.
	animal<string> example3("Cheetah");


}