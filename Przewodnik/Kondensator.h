#pragma once
#include "Element.h"

class Kondensator : public Element
{
	double pojemnosc;

protected:
	Kondensator();
	Kondensator(string model, double pojemnosc);

	virtual void wyswietl() override;
};

