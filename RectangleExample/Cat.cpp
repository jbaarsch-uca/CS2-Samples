#include "Cat.h"
#include "Dog.h"


Cat::Cat() : Cat("Felix") {}
Cat::Cat(string name) {
	this->name = name;
	likedFoods = new string[0];
	numOfLikedFoods = 0;
}
Cat::Cat(Cat& otherCat) {
	this->name = otherCat.name;
	this->numOfLikedFoods = otherCat.numOfLikedFoods;

	this->likedFoods = new string[numOfLikedFoods];
	for (int i = 0; i < numOfLikedFoods; i++) {
		this->likedFoods[i] = otherCat.likedFoods[i];
	}
}

string Cat::getName() {
	return name;
}
void Cat::setName(string name) {
	this->name = name;
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
	
	catDesc += "A cat named " + name + " who eats: \n";
	for (int i = 0; i < numOfLikedFoods; i++) {
		catDesc += "\t" + likedFoods[i] + "\n";
	}
	return catDesc;
}

void Cat::changeFood(string food, int index) {
	likedFoods[index] = food;
}

