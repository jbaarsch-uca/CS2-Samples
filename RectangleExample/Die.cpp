#include "Die.h"
using namespace std;

Die::Die() : numberOfSides(6) { 
	int num = 1;
	faceValue = num; }

Die::Die(int s) : numberOfSides(s) {
	int num = 1;
	faceValue = num;
}

Die::Die(Die& other) : numberOfSides(other.getNumofSides()) {
	this->faceValue = other.faceValue;
}

void Die::setFaceValue(int v) {
	faceValue = v;
}

int Die::getNumofSides() const {
	return numberOfSides;
}

int Die::getfaceValue()const {
	return faceValue;
}

void Die::roll() {
	faceValue = rand() % numberOfSides + 1;
}

string Die::displayDice() const
{
	return "Dice with " + to_string(numberOfSides) +
		" sides showing " + to_string(faceValue);
}

Die& Die::operator = (Die& other) {
	faceValue = other.faceValue;

	return *this;
}

// makes a new Die with the number of sides being the sum of the 
// the two dice numbers of sides.
Die& Die::operator+ (Die& right) {
	// 1. Find the sum of the face values of the two dice
	int sum = this->getNumofSides() + right.getNumofSides();
	// 2. create a new Die object using that sum as the parameter
	Die* result = new Die(sum);
	// return the new Die
	return *result;
}

Die& Die::operator- (Die& right) {
	// Find the difference between this nubmer of sides and right number of sides
	int diff = this->getNumofSides() - right.getNumofSides();
	// Create a new Die object using that difference as the parameter
	Die* result = new Die(diff);
	// return the new Die
	return *result;
}

//std::ostream& operator<< (std::ostream& stream, Die die) {
//	stream << "Dice with " + to_string(die.getNumofSides()) +
//		" sides showing " + to_string(die.getfaceValue()) << endl;
//	return stream;
//}