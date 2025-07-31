#pragma once
#include "Dessert.h"
#include <iostream>
using namespace std;
class ChocolateChipCookies :
    public Dessert
{
private:
    string* addIns;
    int numAddIns;

public:
    ChocolateChipCookies();
    void addIngredient(string ingredient);
    int getNumOfAddIns();
    string* getAddIns();
    string preserve() override;


};

