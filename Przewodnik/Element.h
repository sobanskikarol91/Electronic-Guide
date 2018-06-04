#pragma once
#include <string>
#include "EfektyWizualne.h"
class Element
{
	string kategoria;   // np kondensator, dioda
	string model; // konkretna nazwa

protected: // konstruktory dostepne tylko przez klasy pochodne,
	Element() :model("Nieznana"), kategoria("Nieznana") {}
	Element(string nazwa, string kategoria) : model(nazwa), kategoria(kategoria) {}

public:
	virtual void wyswietl()
	{
		koloruj_txt("Model: " + model,KOLOR::ZIELONY);
	}
};

