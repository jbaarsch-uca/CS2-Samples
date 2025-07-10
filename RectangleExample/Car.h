#ifndef CAR
#define CAR
#include <iostream>
using namespace std;

class Car
{
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

#endif

