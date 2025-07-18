#pragma once
#include "Cat.h"
#include <iostream>
using namespace std;
class Dog
{
private: 
	string name;
	int age;
	
public: 
	static const int NUMBER_OF_LEGS;
	Dog();
	Dog(string name);
	string getName();
	void setName(string name);
	string displayDog();
	friend Cat;

};

