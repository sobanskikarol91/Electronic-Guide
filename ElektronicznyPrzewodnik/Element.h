#pragma once
#include <string>

class Element
{
	string kategoria;   // np kondensator, dioda
	string model; // konkretna nazwa

protected: // konstruktory dostepne tylko przez klasy pochodne,
	Element() :model("Nieznana"), kategoria("Nieznana") {}
	Element(string nazwa, string kategoria) : model(nazwa), kategoria(kategoria) {}

public:
	inline string pobierz_kategorie()  { return kategoria; }
	virtual void wyswietl()
	{
		cout << "Kategoria: " << kategoria << endl;
		cout << "Nazwa: " << model << endl;
	}
};

