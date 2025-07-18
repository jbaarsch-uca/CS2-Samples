#include "Dog.h"
#include<string>

const int Dog::NUMBER_OF_LEGS = 4;

Dog::Dog() : Dog("Fido") {

}
Dog::Dog(string name) {
	this->name = name;
	this->age = 0;
}
string Dog::getName() {
	return name;
}
void Dog::setName(string name) {
	this->name = name;
}
string Dog::displayDog() {
	return "A Dog named " + name;
}
