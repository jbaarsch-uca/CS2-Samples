#ifndef Dessert_h 
#define Dessert_h 
#include <iostream>
class Dessert{
private: 
	int calorieCount;
public: 
	Dessert(); 

	void setCalorieCount(int c); 
	int getCalorieCount()const; 
	virtual std::string preserve() {
		return "Preserve";
	}
};
#endif
