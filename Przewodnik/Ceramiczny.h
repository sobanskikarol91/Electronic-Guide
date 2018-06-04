#pragma once
#include "Kondensator.h"

class Ceramiczny : public Kondensator
{
public:
	Ceramiczny() : Kondensator() {};
	Ceramiczny(string model, double pojemnosc) : Kondensator(model, pojemnosc) {};
};

