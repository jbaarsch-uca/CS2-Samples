#include <iostream>
#include <string>
using namespace std;

class Rectangle {
private:
    int width;
    int length;
    
public:
    void setWidth(int w);
    void setLength(int l);
    int getWidth() const;
    int getLength() const;
    int getArea() const;
};

class Car {
private:
    string color;
    double price;
    long km;
    string model;
    bool isRunning = false;
    int position = 0;
public:
    // Setters
    void setColor(std::string c);
    void setPrice(double p);
    void setKm(long kiloM);
    void setModel(string m);
    // Getters
    std::string getColor() const;
    double getPrice() const;
    long getKm() const;
    string getModel() const;
    // other functions
    void start();
    void stop();
    void forward(int distance);
    void backward(int distance);
    string describeCar();
};

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

void Rectangle::setWidth(int w) {
    width = w;
}

void Rectangle::setLength(int l) {
    length = l;
}

int Rectangle::getWidth() const{
    return width;
}
int Rectangle::getLength() const{
    return length;
}

int Rectangle::getArea() const {
    return length * width;
}

void Car::start() {
    isRunning = true;
}
void Car::stop() {
    isRunning = false;
}
void Car::forward(int distance) {
    position += distance;
}
void Car::backward(int distance) {
    position -= distance;
}

// Setters
void Car::setColor(std::string c) {
    color = c;
}
void Car::setPrice(double p) {
    price = p;
}
void Car::setKm(long kiloM) {
    km = kiloM;
}
void Car::setModel(string m) {
    model = m;
}
// Getters
std::string Car::getColor() const {
    return color;
}
double Car::getPrice() const {
    return price;
}
long Car::getKm() const {
    return km;
}
string Car::getModel() const {
    return model;
}

string Car::describeCar() {
    return
        "A " + color + " " + model +
        " that is worth $" + to_string(price) + " with " +
        to_string(km) + " kilometers.";
}


