#include "Rectangle.h"
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

// Basic Class Definitions from Day One:  Exploring Classes

int main()
{
    
    Rectangle myR;
    myR.setWidth(4);
    myR.setLength(6);

    cout << myR.getWidth() << endl
        << myR.getLength() << endl
        << myR.getArea() << endl;
    

    Car myCar, yourCar;

    myCar.setColor("Grey");
    myCar.setModel("Rogue");
    myCar.setKm(50000);
    myCar.setPrice(24000);

    yourCar.setColor("Farrari Red");
    yourCar.setModel("Porche");
    yourCar.setKm(0);
    yourCar.setPrice(200000);

    cout << myCar.describeCar();
    cout << endl << yourCar.describeCar();
}


