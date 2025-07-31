#include "Pudding.h"

Pudding::Pudding()
{
	flavor = "vanilla";
}
void Pudding::setFlavor(string flavor)
{
	this->flavor = flavor;
}
string Pudding::getFlavor()
{
	return flavor;
}
string Pudding::preserve()
{
	return " let's put it in the fridge!";
}