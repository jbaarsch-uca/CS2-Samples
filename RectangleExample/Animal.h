#pragma once
#include <iostream>
using namespace std;
class Animal
{
private:
	string name;
	//static string class_name
public :
	Animal() {
		cout << "Animal Constructor called." << endl;
	}
	virtual string speak() =0;
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
};

