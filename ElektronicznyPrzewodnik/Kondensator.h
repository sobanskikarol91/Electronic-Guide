#pragma once
#include "Element.h"


class Kondensator : public Element
{
	double pojemnosc;
public:
	Kondensator() : Element() {};
	Kondensator(string nazwa, double pojemnosc) : Element(nazwa, "Kondensator"), pojemnosc(pojemnosc) {};

	virtual void Wyswietl() override
	{
		Element::Wyswietl();   // wyswietlamy info z klasy bazowej
		cout << "Pojemnosc: " << pojemnosc << endl;
	}
};

