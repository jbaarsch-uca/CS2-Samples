#ifndef DIE
#define DIE

#include <iostream>
#include <string>
class Die {
private:
	const int numberOfSides = 6;
	int faceValue;
public:
	Die();
	Die(int s);
	Die(Die& other);
	void setFaceValue(int v);
	int getNumofSides() const;
	int getfaceValue() const;
	void roll();
	std::string displayDice() const;
	Die& operator = (Die& other);
	Die& operator+ (Die& right);
	Die& operator- (Die& right);
	
	//friend std::ostream& operator<< (std::ostream& stream, Die& die);

};
#endif