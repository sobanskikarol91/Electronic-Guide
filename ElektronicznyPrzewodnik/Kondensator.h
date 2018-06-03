#pragma once
#include "Element.h"


class Kondensator : public Element
{
	double pojemnosc;
public:
	Kondensator() : Element() {};
	Kondensator(string model, double pojemnosc) : Element(model, "Kondensator"), pojemnosc(pojemnosc) {};

	virtual void wyswietl() override
	{
		Element::wyswietl();   // wyswietlamy info z klasy bazowej
		cout << "Pojemnosc: " << pojemnosc << endl;
	}
};

