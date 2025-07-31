#pragma once
#include "Comparable.h"
class sideComparable :
    public Comparable
{
public:
    int compare(Comparable& other) override;

};

