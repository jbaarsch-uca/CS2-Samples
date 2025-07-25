#include "GuardDog.h"
#include<string>

string GuardDog::getGuardDogDescription() {
	return "A guard Dog named " + getName()
		+ " that weighs " + to_string(getWeight()) + " lbs.";

}

void GuardDog::doTrick() {
	cout << "Mauls intruder.  What a mess..." << endl;;
}
/*
GuardDog::GuardDog() : Dog("Meatlover") {
	collar = "spikey";
		cout << " Guard Dog Constructor Called.  The collar is " <<
		collar << endl;
}
*/