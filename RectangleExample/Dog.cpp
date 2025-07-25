#include "Dog.h"
#include<string>

const int Dog::NUMBER_OF_LEGS = 4;

Dog::Dog() : Dog("Fido") {
	cout << " Dog Constructor called.  The Dog's name is "
		<< getName() << endl;
}
Dog::Dog(string name) {
	this->setName(name);
	this->age = 0;
	cout << " Dog Constructor called.  The Dog's name is "
		<< getName() << endl;
}


string Dog::displayDog() {
	return "A Dog named " + this->getName();
}

void Dog::doTrick() {
	cout << "The dog raises a paw to shake." << endl;
}
