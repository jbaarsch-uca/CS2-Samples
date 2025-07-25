#include "Cat.h"
#include "Dog.h"


Cat::Cat() : Cat("Felix") {}
Cat::Cat(string name) {
	this->setName( name);
	likedFoods = new string[0];
	numOfLikedFoods = 0;
}
Cat::Cat(Cat& otherCat) {
	this->setName(otherCat.getName());
	this->numOfLikedFoods = otherCat.numOfLikedFoods;

	this->likedFoods = new string[numOfLikedFoods];
	for (int i = 0; i < numOfLikedFoods; i++) {
		this->likedFoods[i] = otherCat.likedFoods[i];
	}
}

string Cat::getName() {
	return getName();
}
void Cat::setName(string name) {
	this->getName() = name;
}

void Cat::addLikedFood(string food) {
	numOfLikedFoods++;
	string* newFoods = new string[numOfLikedFoods];
	for (int i = 0; i < numOfLikedFoods-1; i++) {
		newFoods[i] = likedFoods[i];
	}
	newFoods[numOfLikedFoods-1] = food;
	
	likedFoods = newFoods;
}

string Cat::displayCat(){
	string catDesc;
	
	catDesc += "A cat named " + getName() + " who eats: \n";
	for (int i = 0; i < numOfLikedFoods; i++) {
		catDesc += "\t" + likedFoods[i] + "\n";
	}
	return catDesc;
}

void Cat::changeFood(string food, int index) {
	likedFoods[index] = food;
}

Cat& Cat::operator= (Cat& otherCat) {
	// transfer instance variables from otherCat to this cat.
	// name, likedFoods, and numOfLikedFoods
	// Shallow Copy:
	/*
	this->name = otherCat.name;
	this->likedFoods = otherCat.likedFoods;
	this->numOfLikedFoods = otherCat.numOfLikedFoods;
	return *this;
	*/

	// Deep Copy:
	// 0.  Check for identity--are they they very same object
	if (this != &otherCat) {
		// 1. Copy all non-pointer instance data

		this->setName( otherCat.getName());
		this->numOfLikedFoods = otherCat.numOfLikedFoods;
		// 2. make new dynamically allocated arrays for pointer data
		delete[] this->likedFoods;
		this->likedFoods = new string[numOfLikedFoods];

		// 3. use a loop to cycle through the array elements.
		for (int i = 0; i < numOfLikedFoods; i++) {
			this->likedFoods[i] = otherCat.likedFoods[i];
		}
	}
	return *this;

}

