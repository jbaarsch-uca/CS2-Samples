#pragma once
#include "Cat.h"
#include <iostream>
using namespace std;
class Dog : public Animal
{
private: 
	int age;
	int weight;
	
public: 
	static const int NUMBER_OF_LEGS;
	Dog();
	Dog(string name);
	string displayDog();
	virtual string speak();
	friend Cat;
	// getters and setters for weight
	int getWeight() { return weight; }
	void setWeight() { this->weight = weight; }
	virtual void doTrick();  // virtual?

};

