#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	
public:
	Person(string name) : name(name){ }

public:
	void LogInfo() {
		cout << "Name is " << name << endl;
	}
};