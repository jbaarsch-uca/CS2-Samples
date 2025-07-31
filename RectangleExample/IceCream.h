#pragma once
#include "Dessert.h"
#include <iostream>
using namespace std;
class IceCream :
    public Dessert
{
private:
    string flavor;
public:
    IceCream();
    void setFlavor(string flavor);
    string getFlavor();
    string preserve() override;

};

