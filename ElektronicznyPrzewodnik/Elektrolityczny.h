#pragma once
#include "Kondensator.h"

class Elektrolityczny : public Kondensator
{
public:
	Elektrolityczny() : Kondensator() {}
	Elektrolityczny(string model, double pojemnosc) : Kondensator(model, pojemnosc) {};
};

