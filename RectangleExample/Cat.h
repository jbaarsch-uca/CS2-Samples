#pragma once
#include "Animal.h"
#include <iostream>
using namespace std;
class Cat : public Animal
{
private:
	string* likedFoods;
	int numOfLikedFoods;

public:
	Cat();
	Cat(string name);
	Cat(Cat& otherCat);
	string getName();
	void setName(string name);
	string displayCat();
	void addLikedFood(string food);
	void changeFood(string food, int index);
	Cat& operator= (Cat& otherCat);
};

