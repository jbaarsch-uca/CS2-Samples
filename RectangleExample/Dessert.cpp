#include "Dessert.h"



Dessert::Dessert() {
	calorieCount = 0; 

}

void Dessert::setCalorieCount(int c) {
	calorieCount = c; 

}
int Dessert::getCalorieCount()const {
	return calorieCount; 
}