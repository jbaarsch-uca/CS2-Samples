#ifndef Pudding_h
#define Pudding_h
#include "Dessert.h"
#include <iostream> 

using namespace std; 

class Pudding:public Dessert{
private: 
	string flavor; 
public: 

	Pudding(); 


	void setFlavor(string flavor);
	string getFlavor();
	string preserve() override;

};
#endif 
