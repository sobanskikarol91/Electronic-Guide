#pragma once
#include "Kondensator.h"

class Elektrolityczny : public Kondensator
{
public:
	Elektrolityczny();
	Elektrolityczny(string model, double pojemnosc);
};

