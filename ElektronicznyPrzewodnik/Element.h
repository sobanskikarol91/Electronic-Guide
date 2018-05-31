#pragma once
#include <string>

class Element
{
	string kategoria;   // np kondensator, dioda
	string nazwa; // konkretna nazwa

public:
	Element() :nazwa("Nieznana"), kategoria("Nieznana") {}
	Element(string nazwa, string kategoria) : nazwa(nazwa), kategoria(kategoria) {}

	virtual void Wyswietl()
	{
		cout << "Kategoria: " << kategoria << endl;
		cout << "Nazwa: " << nazwa << endl;
	}
};

