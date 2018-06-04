#pragma once
#include <string>
#include "EfektyWizualne.h"
class Element
{
	string kategoria;   // np kondensator, dioda
	string model; // konkretna nazwa

protected: // konstruktory dostepne tylko przez klasy pochodne,
	Element();
	Element(string nazwa, string kategoria);

public:
	virtual void wyswietl();
};

