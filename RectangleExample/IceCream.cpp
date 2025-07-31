#include "IceCream.h"
IceCream::IceCream()
{
	flavor = "chocolate";
}
void IceCream::setFlavor(string flavor)
{
	this->flavor = flavor;
}
string IceCream::getFlavor()
{
	return flavor;
}
string IceCream::preserve()
{
	return " let's put it in the freezer!";
}