#include "sideComparable.h"

int sideComparable::compare(Comparable& other) {
	if (this->getSides() > other.getSides())
		return 1;
	if (this->getSides() == other.getSides())
		return 0;
	if (this->getSides() < other.getSides())
		return -1;
}
