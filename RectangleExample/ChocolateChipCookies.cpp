#include "ChocolateChipCookies.h"



ChocolateChipCookies::ChocolateChipCookies() {
    addIns = new string[1];
    addIns[0] = "Chocolate Chips";
    numAddIns = 1;
}
void ChocolateChipCookies::addIngredient(string ingredient) {
    string* tempAddIns = new string[numAddIns +1];
    for (int i = 0; i < numAddIns; i++) {
        tempAddIns[i] = addIns[i];
    }
    tempAddIns[numAddIns] = ingredient;
    delete addIns;
    addIns = tempAddIns;
    numAddIns++;
    }

int ChocolateChipCookies::getNumOfAddIns() {
    return numAddIns;
}
string* ChocolateChipCookies::getAddIns() {
    return addIns;
    }
string ChocolateChipCookies::preserve() {
    return "Let's put them into the cookie jar!";
   }