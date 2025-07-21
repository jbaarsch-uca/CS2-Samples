#include "Rectangle.h"
#include "Car.h"
#include "RectangleConsole.h"
#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;

// Basic Class Definitions from Day One:  Exploring Classes

Rectangle* createRectangle();
void displayRectangle(Rectangle* rect);

RectangleConsole rc;
void testAssignment();
void testAttributes();

int main()
{
    

    
}

Rectangle* createRectangle() {
    int length = rc.getInt("Length");
    int width = rc.getInt("Width");
    Rectangle* rect = new Rectangle(length, width);
    return rect;
}
void displayRectangle(Rectangle* rect) {
    rc.displayRectangle(rect);
}

void testAssignment() {
    Dog myDog;
    Dog yourDog;

    //cout << "A dog has " << Dog::NUMBER_OF_LEGS << " legs." << endl;
    //cout << myDog.displayDog() << endl;
    Cat myCat;


    cout << myCat.displayCat() << endl;

    myCat.setName("Shadow");

    myCat.addLikedFood("Salmon");
    myCat.addLikedFood("Rotisserie Chicken");


    cout << "My Cat: " << myCat.displayCat() << endl;
    //cout << "Your Cat: " << yourCat.displayCat() << endl;

    cout << "...Your Cat = My Cat..." << endl;
    Cat yourCat = myCat;
    cout << "My Cat: " << myCat.displayCat() << endl;
    cout << "Your Cat: " << yourCat.displayCat() << endl;

    yourCat.changeFood("Beef", 0);
    yourCat.changeFood("Dog", 1);

    cout << "My Cat: " << myCat.displayCat() << endl;
    cout << "Your Cat: " << yourCat.displayCat() << endl;

}
void testAttributes() {
    //displayRectangle(createRectangle());
    
    Rectangle myR;
    myR.setWidth(4);
    myR.setLength(6);

    cout << myR.getWidth() << endl
        << myR.getLength() << endl
        << myR.getArea() << endl;


    Car myCar, yourCar;
    Car herCar("Red", 120000, 200, "Miata");
    Car* CarPtr;
    CarPtr = new Car("Red", 120000, 200, "Miata");
    
    myCar.setColor("Grey");
    //myCar.setModel("Rogue");
    myCar.setKm(50000);
    myCar.setPrice(24000);

    yourCar.setColor("Farrari Red");
   // yourCar.setModel("Porche");
    yourCar.setKm(0);
    yourCar.setPrice(200000);

    cout << myCar.describeCar();
    cout << endl << yourCar.describeCar();
    cout << endl << herCar.describeCar();
     
}

