#include "Car.h"
#include <iostream>
#include <string>


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


