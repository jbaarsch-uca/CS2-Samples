#pragma once
#include "Dog.h"
class GuardDog :
    public Dog
{
private: 
    string collar;
public:
    using Dog::Dog;
    string getCollar() { return collar; }
    void setCollar(string collar) { this->collar = collar; }
    string getGuardDogDescription();
    void doTrick() override;

};

